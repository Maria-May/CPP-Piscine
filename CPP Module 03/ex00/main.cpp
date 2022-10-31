#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap hero("Lucky Hero");

	hero.attack("Little evil");
	hero.takeDamage(5);
	hero.beRepaired(5);
	hero.takeDamage(9);
	hero.beRepaired(0);
	hero.takeDamage(1);
	hero.beRepaired(5);
	return (0);
}