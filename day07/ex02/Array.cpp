
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "Array.hpp"

int	main()
{
	std::cout << "a is an array of 5 ints\n";
	Array<int>a(5);
	std::cout << "b is copy constructed from a\n";	
	Array<int>b = a;

	std::cout << "a[0] is: " << a[0] << std::endl;	
	std::cout << "b[0] is: " << b[0] << std::endl;	
	a[0] = 1;
	std::cout << "a[0] is changed to: " << a[0] << std::endl;	
	std::cout << "b[0] doesn't change: " << b[0] << std::endl;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	std::cout << "a is changed to: " << a << std::endl;
	b = a;
	std::cout << "b is assigned a: ";
	std::cout << b << std::endl;
	try
	{
		std::cout << "Want to know what is at a[5]??: " << a[5];
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}

