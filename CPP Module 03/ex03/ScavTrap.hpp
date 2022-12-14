#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &b);
	ScavTrap& operator= (const ScavTrap& other);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);
};

#endif