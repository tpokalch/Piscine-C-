
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "SchrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	srand(time(0));
	try
	{
		Bureucrat b("Fedor", 80);
		RobotomyRequestForm	f("Nastya");
//		b.up();
//		b.up();
		b.signForm(f);
		b.executeForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
