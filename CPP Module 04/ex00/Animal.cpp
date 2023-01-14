#include "Animal.hpp"

Animal::Animal() {}

Animal::~Animal() {}

Animal::Animal(const Animal &b)
{
	*this = b;
}

Animal &Animal::operator= (const Animal &other)
{
	this->type = other.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Indeterminate sound" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
