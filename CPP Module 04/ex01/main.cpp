#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	Animal	**array_of_animals = new Animal* [10];
	
	for (int i = 0; i < 10; i++)
		if(i % 2)
			array_of_animals[i] = new Dog();
		else
			array_of_animals[i] = new Cat();

	for (int i = 0; i < 10; i++)
	{
		array_of_animals[i]->makeSound();
		delete array_of_animals[i];
		std::cout << std::endl;
	}

	delete [] array_of_animals;	
	return 0;
}
