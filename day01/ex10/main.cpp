
#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong nmber ofargs\n";
		return (0);
	}		
	std::ifstream readFile(argv[1]);
	if (readFile.fail())
	{
		std::cout << "No such file or directory\n";
		return (0);
	}
	std::string buf;
	while(std::getline(readFile, buf))
	{
		std::cout << buf << std::endl;
	}
}
