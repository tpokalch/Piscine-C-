
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "General ScavTrap created\n";
	return ;
}

void ScavTrap::challangeNewcomer(std::string const & target)
{
	int r;

	std::string chal[3] = {"Magic waits for no one, apprentice!","Still working on that quest?", "Shouldn't you be murdering something about now?"};
	if (energyPoints < 25)
	{
		std::cout << name<<" too low in energy to challange\n";
		return ;
	}
	energyPoints -= 10;
	r = rand() % 3;
	std::cout << "Hey! "<<target<<chal[r] << std::endl;
}

ScavTrap::ScavTrap(std::string n):ClapTrap(n)
{
	std::cout<<"ScavTrap "<<n<<" created.\n";
//	std::cout<<"As a robot, I'm completely immune to Hector's gas atttacks. But that hasn't stopped me from incessantly cowering!\n";
	hitPoints = 100;
	maxPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	name = n;
	meleeD = 20;
	rangedD = 15;
	threeD = 13;
	fourD = 12;
	fiveD = 0;
	armourDReduction = 3;
	type = "ScavTrap ";
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap "<<name<<" destroyed.\n";
	return ;
}
