
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack()
{
        std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w)
{
        weapon = &w;
}

HumanB::HumanB(std::string n)
{
        name = n;
}
