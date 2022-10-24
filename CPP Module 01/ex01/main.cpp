#include "Zombie.hpp"

int main(void)
{
	Zombie	*bigZombieHorde;

	bigZombieHorde = zombieHorde(12, "Zoo");
	for ( int i = 0; i < 12; i++)
		bigZombieHorde[i].announce();
	delete[](bigZombieHorde);
}