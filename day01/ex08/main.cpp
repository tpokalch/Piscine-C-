
#include "Human.hpp"

int main(int argc, char **argv)
{
	Human human;

	if (argc != 3)
	{
		std::cout << "./a.out <action_name> <target>\n";
		return (0);
	}
	human.action(argv[1], argv[2]);
	return (0);
}










