#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	virtual~Dog();
	Dog(const Dog &b);
	Dog &operator= (const Dog &other);
	virtual void makeSound() const;
	Brain *getBrain() const;
};
