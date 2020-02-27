
#include <iostream>

int main()
{
	std::string str =  "HI THIS IS BRAIN\n";
	std::string *ptr = &str;
	std::string &rf = str;

	std::cout << *ptr;
	std::cout << rf;	
}

