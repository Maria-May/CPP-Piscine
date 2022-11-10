#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	hero("SuperHero");

	hero.takeDamage(50);
	hero.beRepaired(20);

	DiamondTrap hero2 = hero;
	DiamondTrap hero3;

	hero2.beRepaired(20);
	hero.attack("SuperHero2");
	hero.whoAmI();
	hero2.whoAmI();
	hero3.whoAmI();
	hero.guardGate();
	hero.highFivesGuys();
	return 0;
}