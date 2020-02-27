
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
        public:
                HumanA();
                HumanA(std::string, Weapon&);
                std::string name;
                Weapon &weapon;
                void setWeapon(Weapon &weapon);
                void attack();
};

#endif
