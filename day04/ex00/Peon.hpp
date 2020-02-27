
#include "Victim.hpp"

#ifndef PEON_HPP
# define PEON_HPP
class Peon: public Victim
{
	public:
		Peon();
		~Peon();
		Peon(Peon const & );
		Peon& operator= (const Peon& e);

		Peon(std::string const );
	
		void getPolymorphed() const;
		void introduce (std::ostream & o, const Victim & i) const;
};

//do we have to overload << here? my guess is yes
/*
std::ostream & operator<<(std::ostream & o, Peon const & i)
{
	i.introduce(o, i);
	return (o);
}
*/
#endif

