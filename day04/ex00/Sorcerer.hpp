
#include "Victim.hpp"
#include "Peon.hpp"

#ifndef SORCERER_HPP
# define SORCERER_HPP

class Sorcerer
{
	public:
		~Sorcerer();
		Sorcerer(Sorcerer const & );
		Sorcerer& operator= (const Sorcerer& e);

		Sorcerer(std::string const, std::string const);
		std::string name;
		std::string title;
		void introduce (std::ostream & o, const Sorcerer & i) const;
		void polymorph(Victim const &) const;

	private:
		Sorcerer();
};


//try to change sorcerer and const
//wy do we overload << outside class?
//does this overload know it has to reference o from lhs and i from rhs?
//why the fuck do we need = and << overoald and copy constructor
//note: we are overloading << operator i std:: class
//is it possible to define << operator in sorcerer class?


std::ostream & operator<<(std::ostream & o, Sorcerer const & i);

#endif

