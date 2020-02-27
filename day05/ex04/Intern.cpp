
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "SchrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


Form	*Intern::makeForm(const std::string & f, const std::string & target) const
{
//Can we make this beautiful?

//		void (Form::*fun[])(std::string) = {&RobotomyRequestForm::action, &SchrubberyCreationForm::action, &PresidentialPardonForm::action};

//	Form *ret = new Form(t);
//	(this->*fun[i])(message);

//	Form *ret;

	if (f == "robotomy request")
	{
		RobotomyRequestForm *ret = new RobotomyRequestForm(target);
//		std::cout << "returning robotomy request\n";
//		RobotomyRequestForm a = *ret;
		return (ret);
	}
	if (f == "schrubbery creation")
	{
		SchrubberyCreationForm *ret = new SchrubberyCreationForm(target);
		return (ret);
	}
	if (f == "presidential pardon")
	{
		PresidentialPardonForm *ret = new PresidentialPardonForm(target);
		return (ret);
	}
	throw (Bureucrat::NoSuchFormException());
	return (NULL);
}
