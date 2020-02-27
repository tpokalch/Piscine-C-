
#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"
#include "Human.hpp"

Human::Human()
{
        std::stringstream buff;

        buff << &this->brain;
//        this->brain.adr = buff.str();
}

std::string     Human::identify()
{
        return(getBrain().identify());
}

