#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat &b);
	Cat &operator= (const Cat &other);
	virtual void makeSound() const;
};

