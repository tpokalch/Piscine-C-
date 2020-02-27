
//#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

/*
const std::string	PresidentialPardonForm::getTarget() const
{
	return (target);
}
*/
PresidentialPardonForm::PresidentialPardonForm(const std::string & t):Form("Presidential Pardon Form", t, 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm():Form("Presidential Pardon Form", getTarget(), 1, 1)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &b):Form("Robotomy Reqest Form", getTarget(), b.getsGrade(), b.geteGrade())
{

}

void PresidentialPardonForm::action(const std::string & target) const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

