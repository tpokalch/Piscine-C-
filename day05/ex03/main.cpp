
#include "PresidentialPardonForm.hpp"
#include "SchrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main()
{
	srand(time(0));
	Intern someRandomIntern;
	Bureucrat b("Taras", 1);

	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	b.executeForm(*rrf);
	return (0);
}
