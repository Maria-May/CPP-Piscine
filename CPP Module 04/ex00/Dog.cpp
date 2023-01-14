#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
}

Dog::~Dog(){}

Dog::Dog(const Dog &b)
{
	*this = b;
}
Dog &Dog::operator= (const Dog &other)
{
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof-woof" << std::endl;
}
