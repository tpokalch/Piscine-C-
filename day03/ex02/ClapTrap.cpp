
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "General ClapTrap created\n";
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (int(amount - armourDReduction) > hitPoints)
	{
		std::cout<<name<<" damaged to 0. Robot dead. Stop beating a dead man.\n";
		hitPoints = 0;
		return ;
	}
	hitPoints -= (amount - armourDReduction);
	std::cout << "OUCH!\n"<<name<<" damaged to "<<hitPoints<<" points.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (int(amount) + hitPoints > maxPoints)
	{
		std::cout<<"At full health("<<maxPoints<<")\n";
		hitPoints = maxPoints;
		return ;
	}
	hitPoints += amount;
	std::cout << "Healed to "<<hitPoints<<" points\n";
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout<<type<<name<<" attacks "<<target<<" with a ranged atttack causing "<<rangedD<<" points of damage!\n";
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout<<type<<name<<" attacks "<<target<<" with a melee atttack causing "<<meleeD<<" points of damage!\n";
}


void ClapTrap::threeAttack(std::string const & target)
{
	std::cout<<type<<name<<" attacks "<<target<<" with a 3 atttack causing "<<threeD<<" points of damage!\n";
}

void ClapTrap::fourAttack(std::string const & target)
{
	std::cout<<type<<name<<" attacks "<<target<<" with a 4 atttack causing "<<fourD<<" points of damage!\n";
}

void ClapTrap::fiveAttack(std::string const & target)
{
	std::cout<<type<<name<<" attacks "<<target<<" with a 5 atttack causing "<<fiveD<<" points of damage!\n";
}


ClapTrap::ClapTrap(std::string n)
{
	type = "ClapTrap ";

	std::cout<<type<<n<<" created.\n";
//	std::cout<<"As a robot, I'm completely immune to Hector's gas atttacks. But that hasn't stopped me from incessantly cowering!\n";
	hitPoints = 100;
	maxPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	name = n;
	meleeD = 30;
	rangedD = 20;
	threeD = 13;
	fourD = 12;
	fiveD = 0;
	armourDReduction = 5;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap "<<name<<" destroyed.\n";
	return ;
}
