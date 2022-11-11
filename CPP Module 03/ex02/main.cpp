#include "FragTrap.hpp"

int main(void)
{
	FragTrap superHero("Super Hero");

	superHero.attack("Lucky Hero");
	superHero.takeDamage(5);
	superHero.beRepaired(5);
	superHero.takeDamage(9);
	superHero.beRepaired(0);
	superHero.takeDamage(1);
	superHero.beRepaired(5);
	superHero.highFivesGuys();
	return (0);
}