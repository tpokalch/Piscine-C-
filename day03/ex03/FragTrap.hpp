


#include <iostream>
#include <cstdlib>
#include <time.h>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap&);
		FragTrap(std::string);
		FragTrap& operator=(const FragTrap& e);

		void vaulthunter_dot_exe(std::string const & target);
};

#endif





