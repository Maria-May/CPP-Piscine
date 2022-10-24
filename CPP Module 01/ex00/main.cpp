#include "Zombie.hpp"

int main(void)
{
	Zombie	*FirstZombie;

	FirstZombie = newZombie("FirstZombie");
	randomChump("SecondZombie");
	delete(FirstZombie);
}
