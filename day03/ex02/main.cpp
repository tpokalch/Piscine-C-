#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(0));

	FragTrap robot("Taras");
//	ClapTrap robot2("not t");
//	std::cout << robot.type <<std::endl;
//	std::cout << robot2.type <<std::endl;


	robot.vaulthunter_dot_exe("this_target");
	robot.vaulthunter_dot_exe("you");
	robot.takeDamage(60);
	robot.vaulthunter_dot_exe("you");
	robot.vaulthunter_dot_exe("you");
	robot.vaulthunter_dot_exe("you");
	robot.beRepaired(20);
	robot.beRepaired(20);
	robot.beRepaired(20);
	robot.vaulthunter_dot_exe("you");
	robot.takeDamage(20);
	robot.takeDamage(20);
	robot.takeDamage(20);
	robot.takeDamage(20);
	robot.takeDamage(20);
	robot.takeDamage(20);
	robot.takeDamage(20);
	robot.takeDamage(20);


	std::cout << "\n\n";
	ScavTrap robot2("Igor");
	robot2.challangeNewcomer("this_target");
	robot2.challangeNewcomer("you");
	robot2.takeDamage(60);
	robot2.challangeNewcomer("you");
	robot2.challangeNewcomer("you");
	robot2.challangeNewcomer("you");
	robot2.beRepaired(20);
	robot2.beRepaired(20);
	robot2.beRepaired(20);
	robot2.challangeNewcomer("you");
	robot2.takeDamage(20);
	robot2.takeDamage(20);
	robot2.takeDamage(20);
	robot2.takeDamage(20);
	robot2.takeDamage(20);
	robot2.takeDamage(20);
	robot2.takeDamage(20);
	robot2.takeDamage(20);
}
