#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap superHero("Super Hero");

	superHero.attack("Lucky Hero");
	superHero.takeDamage(5);
	superHero.beRepaired(5);
	superHero.takeDamage(9);
	superHero.beRepaired(0);
	superHero.takeDamage(1);
	superHero.beRepaired(5);
	superHero.guardGate();
	superHero.takeDamage(100);
	superHero.guardGate();
	return (0);
}