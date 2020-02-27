
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "General SuperTrap " << name << " created.\n";
}

SuperTrap::SuperTrap(std::string n):ClapTrap(n)
{
	std::cout << "SuperTrap " << n << " created.\n";
	hitPoints = FragTrap::hitPoints;
	maxPoints = FragTrap::maxPoints;
	energyPoints = NinjaTrap::energyPoints;
	maxEnergyPoints = NinjaTrap::energyPoints;
	level = 1;
	name = n;
	meleeD = NinjaTrap::meleeD;
	rangedD = FragTrap::rangedD;
	threeD = 13;
	fourD = 12;
	fiveD = 0;
	armourDReduction = FragTrap::armourDReduction;
	type = "SuperTrap ";
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << name << " destroyed.\n";
}
