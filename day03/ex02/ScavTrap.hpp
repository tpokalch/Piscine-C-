
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "ClapTrap.hpp"
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap&);
		ScavTrap(std::string);
		ScavTrap& operator=(const ScavTrap& e);

		void challangeNewcomer(std::string const & target);
};

#endif
