#include "Fixed.hpp"

Fixed::Fixed()
{
	_num = 0;
}

Fixed::Fixed(const int number)
{
	_num = number << _bits;
}

Fixed::Fixed(const float number)
{
	_num = std::roundf(number * (1 << _bits));
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::~Fixed()
{

}

Fixed& Fixed::operator=(const Fixed& fixed)
{
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

Fixed	Fixed::operator++( void )
{
	++(this->_num);
	return (*this);
}

Fixed	Fixed::operator--( void )
{
	--(this->_num);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
  	operator++();
  	return tmp;   
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
  	operator--();
  	return tmp;
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