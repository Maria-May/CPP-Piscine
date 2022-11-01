#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << this->getName() << " is created!" << std::endl;
	this->setStarterPack(name, 100, 50, 20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " is destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &b) : ClapTrap(b)
{
	std::cout << "ScavTrap " << this->_name << " copy is created!" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap: " << this->_name << " assigned with operator." << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	if (!this->getHit() || !this->getEnergy())
		return ;
	std::cout <<  "ScavTrap" << this->getName() << " is now in Gatekeeper mode!" << std::endl;
	this->consumeEnergy();
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->getHit() || !this->getEnergy())
		return ;
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->consumeEnergy();
}

