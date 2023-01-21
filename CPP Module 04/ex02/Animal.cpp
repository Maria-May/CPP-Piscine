#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default contructor is called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor is called" << std::endl;
}

Animal::Animal(const Animal &b)
{
	std::cout << "Animal copy contructor is called" << std::endl;
	*this = b;
}

Animal &Animal::operator= (const Animal &other)
{
	std::cout << "Animal assignment operator is called" << std::endl;
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
