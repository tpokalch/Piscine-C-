
#include "Victim.hpp"

Victim::Victim(std::string n):name(n)
{
	std::cout << "Some random victim called " << name << " just popped !\n";
}

Victim::Victim()
{
	return ;
}


//what if i write : Victim(s,name, s.title)?
Victim::Victim(const Victim & s)
{
	name = s.name;
}


void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep !\n";
}

void Victim::introduce (std::ostream & o, const Victim & i) const
{
//why do we need Victim & i if we can acces current object through *this
	o << "I am victim " << i.name << ", and I like otters !\n";
}

std::ostream & operator<<(std::ostream & o, Victim const & i)
{
	i.introduce(o, i);
	return (o);
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason !\n";
}

