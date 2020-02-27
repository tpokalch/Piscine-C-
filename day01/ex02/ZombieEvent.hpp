
#ifndef ZOMBIEEVENT_HPP 

#define ZOMBIEEVENT_HPP 
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		std::string type;
		void setZombieType();
		Zombie *newZombie(std::string name);
		void RandomChump();
};


#endif











