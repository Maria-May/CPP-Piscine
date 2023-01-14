#pragma once
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &b);
	Animal &operator= (const Animal &other);
	virtual void makeSound() const;
	std::string getType() const;
};
