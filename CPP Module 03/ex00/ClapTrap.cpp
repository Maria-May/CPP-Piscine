#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &b)
{
	*this = b;
	std::cout << "ClapTrap " << this->_name << " copy is created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "Claptrap: " << this->_name << " assigned with operator." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->_hitPoint || !this->_energyPoint)
		return ;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoint)
		return ;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage" << std::endl;
	this->_hitPoint -= amount;
	if (this->_hitPoint < 0)
		this->_hitPoint = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hitPoint || !this->_energyPoint)
		return ;
	std::cout << "ClapTrap " << this->_name << " repair himself " << amount << " health" << std::endl;
	this->_hitPoint += amount;
	this->_energyPoint--;

}