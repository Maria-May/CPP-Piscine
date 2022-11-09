#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int	_hitPoint;
	int	_energyPoint;
	int	_attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &b);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif