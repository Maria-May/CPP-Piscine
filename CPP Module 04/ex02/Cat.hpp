#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	virtual~Cat();
	Cat(const Cat &b);
	Cat &operator= (const Cat &other);
	virtual void makeSound() const;
	Brain *getBrain() const;
};

