#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Wrong cat default contructor is called" << std::endl;
	type = "Wrong Cat";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &b)
{
	std::cout << "Wrong cat copy contructor is called" << std::endl;
	*this = b;
}

WrongCat &WrongCat::operator= (const WrongCat &other)
{
	std::cout << "Wrong cat assignment operator is called" << std::endl;
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow-meow" << std::endl;
}
