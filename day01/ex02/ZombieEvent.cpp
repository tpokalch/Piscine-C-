
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>


void	ZombieEvent::setZombieType(void)
{
	this->type = "Grey";
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *ret = new Zombie();
	ret->type = type;
	ret->name = name;
	return (ret);
}

void	ZombieEvent::RandomChump(void)
{
	std::string names[] = {"Giraffre", "Dog", "Cat", "Cumambert"};
	Zombie *zombie = newZombie(names[rand() % 4]);
	zombie->announce();
	delete zombie;
}
