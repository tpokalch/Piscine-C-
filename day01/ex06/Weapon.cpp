
#include "Weapon.hpp"

Weapon::Weapon()
{
        return ;
}

Weapon::Weapon(std::string w)
{
        setType(w);
}

void Weapon::setType(std::string w)
{
        this->type = w;
}

std::string& Weapon::getType()
{
        return (this->type);
}
