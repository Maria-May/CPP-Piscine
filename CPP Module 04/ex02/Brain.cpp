#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default contructor is called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor is called" << std::endl;
}

Brain::Brain(const Brain &b)
{
    std::cout << "Brain copy contructor is called" << std::endl;
    *this = b;
}

Brain &Brain::operator= (const Brain &other)
{
    std::cout << "Brain assignment operator is called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}