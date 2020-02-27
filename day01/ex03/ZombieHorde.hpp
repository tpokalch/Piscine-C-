
#include <iostream>
#include "Zombie.hpp"

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

class ZombieHorde
{
	public:
		int n;
		std::string type;
		void setZombieType();
		ZombieHorde(void);
		ZombieHorde(int n);
		Zombie *storage;
		void announce();
};

#endif











