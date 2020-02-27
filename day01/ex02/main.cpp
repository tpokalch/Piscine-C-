
#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>

int main()
{
	srand(time(0));
	ZombieEvent event;

	event.setZombieType();
	event.RandomChump();
	event.RandomChump();
	event.RandomChump();
	return (0);
}
