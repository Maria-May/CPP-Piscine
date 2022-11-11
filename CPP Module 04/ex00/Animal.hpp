#pragma once
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(/* args */);
	~Animal();
	Animal(const Animal &b);
	Animal &operator= (const Animal &other);
	void makeSound() const;
	std::string getType() const;
};
