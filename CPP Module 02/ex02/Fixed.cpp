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
	// std::cout << "getRawBits member function called" << std::endl;
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

bool	Fixed::operator<( const Fixed &other ) const
{
	return (this->_num >> this->_bits < other._num >> this->_bits);
}

bool	Fixed::operator>( const Fixed &other ) const
{
	return (this->_num >> this->_bits > other._num >> this->_bits);
}

bool	Fixed::operator==( const Fixed &other ) const
{
	return (this->_num >> this->_bits == other._num >> this->_bits);
}

bool	Fixed::operator!=( const Fixed &other ) const
{
	return (this->_num >> this->_bits != other._num >> this->_bits);
}

bool	Fixed::operator<=(  const Fixed &other ) const
{
	return (this->_num >> this->_bits <= other._num >> this->_bits);
}

bool	Fixed::operator>=(  const Fixed &other ) const
{
	return (this->_num >> this->_bits >= other._num >> this->_bits);
}

Fixed	Fixed::operator+( const Fixed &other ) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-( const Fixed &other ) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*( const Fixed &other ) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/( const Fixed &other ) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}



Fixed	&Fixed::min(Fixed	&a, Fixed	&b)
{
	return (a < b ? a : b);
}

const	Fixed	&Fixed::min(const	Fixed &a, const	Fixed	&b)
{
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed	&a, Fixed	&b)
{
	return (a > b ? a : b);
}

const	Fixed	&Fixed::max(const	Fixed &a, const	Fixed	&b)
{
	return (a > b ? a : b);
}