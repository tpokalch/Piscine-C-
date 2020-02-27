
#include "Peon.hpp"

//what is does subject suppose is hard in Peon?
//how to make both constructors output the same thing?

Peon::Peon(std::string const n):Victim(n)
{
	std::cout << "Zog Zog.\n";
}

Peon::Peon()
{
	return ;
}


//what if i write : Peon(s,name, s.title)?
Peon::Peon(const Peon & s)
{
	name = s.name;
}

//why not visible when not defined in child class, but inherited?
//should we define them in a class to overwrite?


void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony !\n";
}



void Peon::introduce (std::ostream & o, const Victim & i) const
{
//why do we need Peon & i if we can acces current object through *this
	o << "I am " << i.name << ", and I like  ponies !\n";
}


Peon::~Peon()
{
	std::cout << "Blueark..\n";
}




