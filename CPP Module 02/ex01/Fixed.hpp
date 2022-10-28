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
};

#endif