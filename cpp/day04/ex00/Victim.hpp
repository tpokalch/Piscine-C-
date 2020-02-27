
#include <iostream>

#ifndef VICTIM_HPP
# define VICTIM_HPP

class Victim
{
	public:
		Victim();
		~Victim();
		Victim(Victim const & );
		Victim& operator= (const Victim& e);

		Victim(std::string const );

		std::string name;
		void introduce (std::ostream & o, const Victim & i) const;
		virtual void getPolymorphed() const;
};


std::ostream & operator<<(std::ostream & o, Victim const & i);

#endif

