////////////////////
#include "Pony.hpp"

	Pony::Pony(std::string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	void Pony::setname(std::string name)
	{
		this->name = name;
	}
	void  Pony::setage(int age)
	{
		this->age = age;
	}
	void Pony::printname(void)
	{
		std::cout << name << std::endl;
	}
	void Pony::printage(void)
	{
	   std::cout << age <<std::endl;
	}
Pony::~Pony()
{
	std::cout << "Destroying pony\n";
}
