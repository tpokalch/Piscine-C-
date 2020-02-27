
#include <iostream>
#include "Bureucrat.hpp"

int	main()
{
	Bureucrat b("Fedor", 150);
	try
	{
		std::cout << "trying to write 150 + 1:";
		b.down();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		std::cout << "trying to write 150 - 1:";
		b.up();
		std::cout << "All ok" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		std::cout << "trying to create Bureucrat Olga 151:";
		Bureucrat c("Olga", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << b;
	return 0;
}
