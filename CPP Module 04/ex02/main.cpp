#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete i;
	delete j;
	const WrongAnimal* newmeta = new WrongCat();
	std::cout << newmeta->getType() << " " << std::endl;
	newmeta->makeSound(); //will output the wrongAnimal sound!
	delete newmeta;
	j = new Dog();
	i = new Cat();
	delete j;//should not create a leak
	delete i;
	Cat basic;
	{
		Cat tmp = basic;
	}
	return 0;
}
