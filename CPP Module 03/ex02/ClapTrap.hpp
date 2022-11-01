#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int	_hitPoint;
	int	_energyPoint;
	int	_attackDamage;
	ClapTrap();
	void setStarterPack(std::string name, int hitPoint, int energyPoint, int attackDamage);
	std::string getName() const;
	int getHit();
	int getEnergy();
	int getAttackDamage();
	void setName(std::string name);
	void consumeEnergy();
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &b);
	ClapTrap& operator= (const ClapTrap& other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
