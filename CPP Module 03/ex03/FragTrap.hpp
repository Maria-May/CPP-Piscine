#ifndef	FRAGTARP_HPP
#define	FRAGTARP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &b);
	FragTrap& operator= (const FragTrap& other);
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif