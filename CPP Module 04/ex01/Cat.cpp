#include "Cat.hpp"

Cat::Cat() 
{
	std::cout << "Cat default contructor is called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor is called" << std::endl;
}

Cat::Cat(const Cat &b)
{
	std::cout << "Cat copy contructor is called" << std::endl;
	type = "Cat";
	brain = new Brain();
	*this = b;
}

Cat &Cat::operator= (const Cat &other)
{
	std::cout << "Cat assignment operator is called" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.getBrain());
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow-meow" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
