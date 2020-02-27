/////////////////////////
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap()
{
	return ;
}

NinjaTrap::NinjaTrap(std::string n):ClapTrap(n)
{
	std::cout<<"NinjaTrap "<<n<<" created.\n";
//	std::cout<<"As a robot, I'm completely immune to Hector's gas atttacks. But that hasn't stopped me from incessantly cowering!\n";
	hitPoints = 60;
	maxPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	name = n;
	meleeD = 60;
	rangedD = 5;
	armourDReduction = 0;
	type = "NinjaTrap ";
}


void	NinjaTrap::rangedAttack(ClapTrap & target)
{
	std::cout<<type<<name<<" attacks "<<target.type<<target.name<<" with a ranged attack causing "<<meleeD<<" points of damage!\n";
	target.takeDamage(rangedD);
}



void	NinjaTrap::meleeAttack(ClapTrap & target)
{
	std::cout<<type<<name<<" attacks "<<target.type<<target.name<<" with a melee atttack causing "<<meleeD<<" points of damage!\n";
	target.takeDamage(meleeD);
}

void NinjaTrap::ninjaShoebox(ClapTrap & target)
{
	int r;

	void (NinjaTrap::*func[])(ClapTrap &) = {&NinjaTrap::rangedAttack, &NinjaTrap::meleeAttack};
	if (energyPoints < 25)
	{
		std::cout << name<<" too low in energy to attack\n";
		return ;
	}
	energyPoints -= 25;
	r = rand() % 2;
	(this->*func[r])(target);
}

NinjaTrap::~NinjaTrap()
{
	std::cout<<"NinjaTrap "<<name<<" destroyed.\n";
	return ;
}





