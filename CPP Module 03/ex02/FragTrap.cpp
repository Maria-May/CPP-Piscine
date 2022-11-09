#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->getName() << " is created!" << std::endl;
	this->setStarterPack(name, 100, 100, 30);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " is destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &b) : ClapTrap(b)
{
	std::cout << "FragTrap " << this->_name << " copy is created!" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap " << this->_name << " assigned with operator." << std::endl;
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (!this->getHit() || !this->getEnergy())
		return ;
	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->consumeEnergy();
}

void FragTrap::highFivesGuys(void)
{
	if (!this->getHit() || !this->getEnergy())
		return ;
	std::cout << "FragTrap " << this->getName() << " request a high five" << std::endl;
	this->consumeEnergy();
}
