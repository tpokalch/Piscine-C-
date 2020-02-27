


#include <iostream>
#include <cstdlib>
#include <time.h>

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap&);
		FragTrap(std::string);
		FragTrap& operator=(const FragTrap& e);

		std::string type;
		int hitPoints;
		int maxPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		std::string name;
		int meleeD;
		int rangedD;
		int threeD;
		int fourD;
		int fiveD;
		int armourDReduction;

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void threeAttack(std::string const & target);
		void fourAttack(std::string const & target);
		void fiveAttack(std::string const & target);

		void *attack(std::string const & target);

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
