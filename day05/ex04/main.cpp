
#include "PresidentialPardonForm.hpp"
#include "SchrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "OfficeBlock.hpp"
#include "Intern.hpp"

int	main()
{
	Intern idiotOne;
	Bureucrat hermes = Bureucrat("Hermes Conrad", 37);
	Bureucrat bob = Bureucrat("Bobby Bobson", 5);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureucracy("robotomy request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
		/* oh god, unknown error, what to do ?! */
	}
	return (0);
}
