
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t):name(n), title(t)
{
	std::cout << name <<", " << title << " is born !\n";
}

Sorcerer::Sorcerer()
{
	return ;
}

Sorcerer& Sorcerer::operator= (const Sorcerer& e)
{
	this->name = e.name;
	this->title = e.title;
	return (*this);
}

//what if i write : Sorcerer(s,name, s.title)?
Sorcerer::Sorcerer(const Sorcerer & s)
{
	name = s.name;
	title = s.title;
}

void Sorcerer::introduce (std::ostream & o, const Sorcerer & i) const
{
//why do we need Sorcerer & i if we can acces current object through *this
	o << "I am " << i.title << ", " << i.name << ", and I like ponies !\n";
}

void Sorcerer::polymorph(const Victim & v) const
{
	v.getPolymorphed();
}


std::ostream & operator<<(std::ostream & o, Sorcerer const & i)
{
	i.introduce(o, i);
	return (o);
}



Sorcerer::~Sorcerer()
{
	std::cout << name <<", " << title << " is dead. Consequences will never be the same !\n";
}


