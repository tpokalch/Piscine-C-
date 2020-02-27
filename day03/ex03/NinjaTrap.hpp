
#include "ClapTrap.hpp"

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

class NinjaTrap: public ClapTrap
{
	public:
		NinjaTrap();
		~NinjaTrap();
		NinjaTrap(NinjaTrap&);
		NinjaTrap(std::string);
		NinjaTrap& operator=(const NinjaTrap& e);

		void rangedAttack(ClapTrap & target);
		void meleeAttack(ClapTrap & target);

		void ninjaShoebox(ClapTrap & target);
};

#endif
