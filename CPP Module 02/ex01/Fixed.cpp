#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_num = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	_num = number << _bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	_num = std::roundf(number * (1 << _bits));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_num = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (_num);
}

void Fixed::setRawBits( int const raw )
{
	_num = raw;
}

float Fixed::toFloat( void ) const
{
	return  ((_num) / (float)(1 << _bits));
}

int Fixed::toInt( void ) const
{
	return (_num >> _bits);
}

std::ostream & operator<< (std::ostream &out, const Fixed &c)
{
	return out << c.toFloat();
}