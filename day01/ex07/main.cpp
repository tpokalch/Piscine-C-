
#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string buff;
	if (argc != 4)
	{
		std::cout << "Bad arguments\n";
		return (0);
	}
	std::string s1 = argv[1];	
	std::ifstream readFile(argv[1]);
	if (readFile.fail())
	{
		std::cout << "Bad arguments\n";
		return (0);
	}
	std::string output = (s1 + ".replace");
	std::ofstream outFile(output);
	if (outFile.fail())
	{
		std::cout << "Error creating file\n";
		exit(1);
	}
	while (getline(readFile, buff))
	{
		while (buff.find(argv[2]) != std::string::npos)
		{
			buff.replace(buff.find(argv[2]), ((std::string)argv[2]).length(), argv[3]);
		}
	outFile << buff << std::endl;
	}
	return (0);
}






