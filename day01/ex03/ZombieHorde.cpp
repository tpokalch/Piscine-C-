
#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde(void)
{
	return ;
}

ZombieHorde::ZombieHorde(int n)
{
	srand(time(0));
	ZombieHorde horde;
	std::string names[] = {"Giraffre", "Dog", "Cat", "Cumambert"};

	horde.setZombieType();
	this->n = n;
	horde.storage = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		horde.storage[i].name = names[rand() % 4];
		horde.storage[i].type = horde.type;
	}
	this->storage = horde.storage;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < n; i++)
		storage[i].announce();
}

void	ZombieHorde::setZombieType(void)
{
	this->type = "Grey";
}







