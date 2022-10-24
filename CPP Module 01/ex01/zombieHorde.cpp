#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	hordeZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		hordeZombie[i].setName(name);
	return (hordeZombie);
}