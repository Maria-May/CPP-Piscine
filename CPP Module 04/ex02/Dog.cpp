#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default contructor is called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor is called" << std::endl;
}

Dog::Dog(const Dog &b)
{
	std::cout << "Dog copy contructor is called" << std::endl;
	type = "Dog";
	brain = new Brain();
	*this = b;
}
Dog &Dog::operator= (const Dog &other)
{
	std::cout << "Dog assignment operator is called" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.getBrain());
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof-woof" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
