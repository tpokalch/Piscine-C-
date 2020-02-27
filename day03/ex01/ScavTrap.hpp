

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <time.h>

class ScavTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap&);
		ScavTrap(std::string);
		ScavTrap& operator=(const ScavTrap& e);

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
		void challangeNewcomer(std::string const & target);
};

#endif
