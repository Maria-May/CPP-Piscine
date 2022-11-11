#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default name_clap_name"), ScavTrap("Default name_Scav"), FragTrap("Default name_Frag"), _name("Default name")
{
	std::cout << "DiamondTrap " << this->_name << " is created!" << std::endl;
	FragTrap::_hitPoint = 100;
	ScavTrap::_energyPoint = 50;
	FragTrap::_attackDamage = 30;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_Scav"), FragTrap(name + "_Frag"), _name(name)
{
	std::cout << "DiamondTrap " << this->_name << " is created!" << std::endl;
	FragTrap::_hitPoint = 100;
	ScavTrap::_energyPoint = 50;
	FragTrap::_attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->getName() << " is destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &b) : ClapTrap(b._name + "_clap_name"), ScavTrap("Default name_Scav"), FragTrap(b._name + "_Frag"), _name(b._name)
{
	FragTrap::_hitPoint = b.FragTrap::_hitPoint;
	ScavTrap::_energyPoint = b.ScavTrap::_energyPoint;
	FragTrap::_attackDamage = b.FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " copy is created!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	this->_name = other._name;
	ClapTrap::operator=(other);
	std::cout << "DiamondTrap " << this->_name << " assigned with operator." << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name " << this->_name << ", ClapTrap " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}