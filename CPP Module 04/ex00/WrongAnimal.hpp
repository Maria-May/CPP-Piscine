#pragma once
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &b);
	WrongAnimal &operator= (const WrongAnimal &other);
	void makeSound() const;
	std::string getType() const;
};

