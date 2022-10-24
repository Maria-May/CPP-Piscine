#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed..." << std::endl;
}

Zombie::Zombie()
{}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}