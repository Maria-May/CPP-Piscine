#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_num;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &src);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	bool	operator<( const Fixed &other ) const;
	bool	operator>( const Fixed &other ) const;
	bool	operator==( const Fixed &other ) const;
	bool	operator!=( const Fixed &other ) const;
	bool	operator<=( const Fixed &other ) const;
	bool	operator>=( const Fixed &other ) const;

	Fixed	operator+( const Fixed &other ) const;
	Fixed	operator-( const Fixed &other ) const;
	Fixed	operator*( const Fixed &other ) const;
	Fixed	operator/( const Fixed &other ) const;

	Fixed	operator++( void );
	Fixed	operator--( void );

	static	Fixed	&min(Fixed	&a, Fixed	&b);
	static	const	Fixed	&min(const	Fixed &a, const	Fixed	&b);
	static	Fixed	&max(Fixed	&a, Fixed	&b);
	static	const	Fixed	&max(const	Fixed &a, const	Fixed	&b);
};

std::ostream & operator<< (std::ostream &out, const Fixed &c);
#endif