#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Wrong Cat";
}

WrongCat::~WrongCat() {}

WrongCat::WrongCat(const WrongCat &b)
{
	*this = b;
}

WrongCat &WrongCat::operator= (const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow-meow" << std::endl;
}
