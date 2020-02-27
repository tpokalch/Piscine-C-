
#include "HumanA.hpp"
#include <iostream>
#include "Weapon.hpp"

void HumanA::attack()
{
        std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &w)
{
        weapon = w;
}

HumanA::HumanA(std::string n, Weapon &w): name(n), weapon(w)
{
        return ;
//      this->weapon = w;
//      name = n;
}
