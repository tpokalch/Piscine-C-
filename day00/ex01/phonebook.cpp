
#include "Contact.class.hpp"

void	print_book(Contact c[], int s)
{
	int i = 0;

	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	while (i < s)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		if (c[i].first_name.length() > 10)
			std::cout << std::setw(10) << c[i].first_name.substr(0,9).replace(9, 1, ".") << "|";
		else
			std::cout << std::setw(10) << c[i].first_name << "|";
		if (c[i].last_name.length() > 10)
			std::cout << std::setw(10) << c[i].last_name.substr(0, 9).replace(9, 1, ".") << "|";
		else
			std::cout << std::setw(10) << c[i].last_name << "|";
		if (c[i].nickname.length() > 10)
			std::cout << std::setw(10) << c[i].nickname.substr(0, 9).replace(9, 1, ".") << "|\n";
		else
			std::cout << std::setw(10) << c[i].nickname << "|\n";
		i++;
	}
}

void	print_contact(Contact c)
{
	std::cout << c.first_name << std::endl;
	std::cout << c.last_name << std::endl;
	std::cout << c.birthday << std::endl;
	std::cout << c.adress << std::endl;
	std::cout << c.nickname << std::endl;
	std::cout << c.login << std::endl;
	std::cout << c.meal << std::endl;
	std::cout << c.underwear << std::endl;
	std::cout << c.secret << std::endl;
	std::cout << c.phone << std::endl;
	std::cout << c.email << std::endl;
}

int main ()
{
	Contact contacts[8];
	std::string command;
	std::string input;
	int	index = 0;
	bool valid = true;
	int	s;

	while (1)
	{
		std::cout << "Write ADD, SEARCH or EXIT" << std::endl;
		std::cin >> command;
		if ("EXIT" == command)
			break ;
		else if ("ADD" == command)
		{
			if (index > 7)
				std::cout << "book is full\n";
			else
			{
				std::cout << "enter without spaces\n" << "enter first name" << std::endl;
				std::cin >> contacts[index].first_name;
				std::cout << "enter last name" << std::endl;
				std::cin >> contacts[index].last_name;
				std::cout << "enter birthday" << std::endl;
				std::cin >> contacts[index].birthday;
				std::cout << "enter adress" << std::endl;
				std::cin >> contacts[index].adress;
				std::cout << "enter nickname" << std::endl;
				std::cin >> contacts[index].nickname;
				std::cout << "enter login" << std::endl;
				std::cin >> contacts[index].login;	
				std::cout << "enter meal" << std::endl;
				std::cin >> contacts[index].meal;	
				std::cout << "enter underwear" << std::endl;
				std::cin >> contacts[index].underwear;	
				std::cout << "enter secret" << std::endl;
				std::cin >> contacts[index].secret;	
				std::cout << "enter phone" << std::endl;
				std::cin >> contacts[index].phone;	
				std::cout << "enter email" << std::endl;
				std::cin >> contacts[index].email;
				index++;
			}
		}
		else if ("SEARCH" == command)
		{
			if (index > 0)
			{
				while (1)
				{
					valid = 1;
					print_book(contacts, index);
					std::cout << "enter index of contact" << std::endl;
					std::cin >> input;
					if (input.length() != 1 || !isdigit(input[0]))
					{
						valid = 0;
						std::cout << "invalid index\n";
						printf("length is %lu\n", input.length());
						printf("isdigit is %d\n", isdigit(input[0]));
					}
					else
						s = input[0] - '0';
					if (valid && (s < index && s >= 0 && isdigit('0' + s)))
					{
						print_contact(contacts[s]);
						break ;
					}
					else
						std::cout << "invalid index\n";

				}
			}
			else
				std::cout << "no contacts\n";
		}
		else
			std::cout << "Wrong command\n";
	}
return 0;
}
