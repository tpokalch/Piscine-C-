
#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"
#include "Human.hpp"

std::string Brain::identify()
{
	std::stringstream buff;

	buff << this;
	return (buff.str());
}

Brain& Human::getBrain()
{
	return(this->brain);
}

