#include "FragTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap robot("Taras");

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
}
