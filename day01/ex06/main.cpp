
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon    club = Weapon("crude spiked club");
//	std::cout << club.getType() << std::endl; 
        HumanA    bob("Bob", club);
//	std::cout << club.getType() << std::endl; 
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon    club = Weapon("crude spiked club");
        HumanB    jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}


