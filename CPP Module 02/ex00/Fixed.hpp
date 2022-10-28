#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int	_num;
public:
	Fixed();
	Fixed(const Fixed &src);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif