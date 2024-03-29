#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog &b);
	Dog &operator= (const Dog &other);
	virtual void makeSound() const;
};
