
#include <iostream>
#include <fstream>
#include "Loger.hpp"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Wrong args.\nUsage: ./a.out <destination> <message>\n";
		return (0);
	}
	Loger loger("log.txt");
/////////////////////////////////
	loger.log(argv[1], argv[2]);
}









	
