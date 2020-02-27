
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
        public:
                std::string& getType();
                void setType(std::string w);
                Weapon(std::string w);
                Weapon();

        private:
                std::string type;
};

#endif
