#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {}

WrongAnimal::~WrongAnimal() {}

WrongAnimal::WrongAnimal(const WrongAnimal &b)
{
	*this = b;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal indeterminate sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}