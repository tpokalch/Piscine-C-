
#include <iostream>
#include <stdlib.h>

#include "macros.hpp"
#include <climits>
#include <cmath>
#include <iomanip>

void	printChar(double d)
{
	std::cout << "char: ";

	if (std::isnan(d))
		PRINT("impossible");
	else if (d > 126 || d < 32)
		PRINT("Non displayable");
	else
		PRINT(static_cast<char>(d));
}

void	printInt(double d)
{
	std::cout << "int: ";
	if (d > INT_MAX || d < INT_MIN || std::isnan(d))
		PRINT("impossible");
	else
		PRINT(static_cast<int>(d));
}

void	printFloat(double d)
{
	std::cout << "float: ";
	if (floor(d) == d)
		PRINT(static_cast<float>(d) << ".0" << "f");
	else
		PRINT(static_cast<float>(d) << "f");
}

void	printDouble(double d)
{
	std::cout << "double: ";
	if (floor(d) == d)
		PRINT(d << ".0");
	else
		PRINT(d);
}

void	convert(std::string val)
{
	double d = std::stod(val);
	printChar(d);
	printInt(d);
	printFloat(d);
	printDouble(d);
}

int	 main(int ac, char **av)
{
	if (ac == 2)
		convert(av[1]);
	else
		PRINT("usage: ./convert [char / int / float / double]");
	return (0);
}	
