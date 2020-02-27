#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"



int main()
{
	srand(time(0));

	SuperTrap supertrap("My Dear Reader");
	FragTrap robot("Taras");
	supertrap.ninjaShoebox(robot);
	supertrap.vaulthunter_dot_exe("You");
	supertrap.ninjaShoebox(supertrap);
	supertrap.beRepaired(100);
}
