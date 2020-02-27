 
#include <string>
#include <iostream>
#include <cctype>

std::string cap(std::string a)
{
	int i = -1;

	while (++i < (int)a.length())
		a[i] = toupper(a[i]);
	return (a);
}



int main(int argc, char **argv)
{
	std::string sum;
	int i = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < argc)
		std::cout << cap(argv[i]);
	std::cout << std::endl;
}
























