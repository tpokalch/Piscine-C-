
#include <time.h>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	return ;
}

FragTrap::FragTrap(std::string n):ClapTrap(n)
{
	std::cout<<"FragTrap "<<n<<" created.\n";
//	std::cout<<"As a robot, I'm completely immune to Hector's gas atttacks. But that hasn't stopped me from incessantly cowering!\n";
	hitPoints = 100;
	maxPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	name = n;
	meleeD = 30;
	rangedD = 20;
	armourDReduction = 5;
	type = "FragTrap ";
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int r;

	void (FragTrap::*func[])(std::string const &) = {&FragTrap::rangedAttack, &FragTrap::meleeAttack, &FragTrap::threeAttack, &FragTrap::fourAttack, &FragTrap::fiveAttack};
	if (energyPoints < 25)
	{
		std::cout << name<<" too low in energy to attack\n";
		return ;
	}
	energyPoints -= 25;
	r = rand() % 5;
	(this->*func[r])(target);
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap "<<name<<" destroyed.\n";
	return ;
}
