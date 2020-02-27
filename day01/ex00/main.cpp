
#include "Pony.hpp"

void ponyOnTheHeap(std::string name, int age)
{
	Pony pony = Pony(name, age);
	pony.printname();
	pony.printage();
}

void ponyOnTheStack(std::string name, int age)
{
	Pony *pony = new Pony(name, age);
	pony->printname();
	pony->printage();
	delete pony;
}

int main()
{
	std::cout << "Pony on heap is\n";
	ponyOnTheHeap("pony1", 12);

	std::cout << "Pony on stack is\n";
	ponyOnTheStack("pony2", 13);
	return (0);
}























