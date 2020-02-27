
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

class SuperTrap:  public NinjaTrap, public FragTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string n);
		~SuperTrap();
};


#endif
