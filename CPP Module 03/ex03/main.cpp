#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	// ClapTrap hero("Lucky Hero");

	// hero.attack("Little evil");
	// hero.takeDamage(5);
	// hero.beRepaired(5);
	// hero.takeDamage(9);
	// hero.beRepaired(0);
	// hero.takeDamage(1);
	// hero.beRepaired(5);

	FragTrap superHero("Super Hero");

	superHero.attack("Lucky Hero");
	superHero.takeDamage(5);
	superHero.beRepaired(5);
	superHero.takeDamage(9);
	superHero.beRepaired(0);
	superHero.takeDamage(1);
	superHero.beRepaired(5);
	// superHero.guardGate();
	// superHero.takeDamage(100);
	// superHero.guardGate();
	superHero.highFivesGuys();
	return (0);
}