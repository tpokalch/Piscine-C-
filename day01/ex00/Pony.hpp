
#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	public:
		Pony(std::string name, int age);
		void setname(std::string name);
		void setage(int age);
		void printname(void);
		void printage(void);
		~Pony();
	private:
		std::string name;
		int	age;
};	

#endif
















