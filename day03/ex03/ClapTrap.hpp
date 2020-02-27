
#include "iostream"

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP



class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap&);
		ClapTrap(std::string);
		ClapTrap& operator=(const ClapTrap& e);

		std::string type;
		std::string name;

		int hitPoints;
		int maxPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
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
};


#endif
