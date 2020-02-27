//////////////////////

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
        public:
                HumanB();
                HumanB(std::string name);
                std::string name;
                void setWeapon(Weapon& weapon);
                void attack();
        private:
                Weapon *weapon;
};

#endif

