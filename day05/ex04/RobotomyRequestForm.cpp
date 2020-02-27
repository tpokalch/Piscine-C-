
#include "RobotomyRequestForm.hpp"
/*
const std::string	RobotomyRequestForm::getTarget() const
{
	return (target);
}
*/
RobotomyRequestForm::RobotomyRequestForm(const std::string & t):Form("Robotomy Request Form", t, 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm():Form("Robotomy Request Form", "", 1, 1)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &b):Form("Robotomy Reqest Form", b.getTarget(), b.getsGrade(), b.geteGrade())/*name(b.getName), target(b.getTarget), rsign(b.getsGrade), rexec(b.geteGrade)*/
{
}
//SHOULD WE PUT IT TO ABSTRACT CLASS FORM AND 
/*
void RobotomyRequestForm::execute(const Bureucrat & executor)
{
*/	

void RobotomyRequestForm::action(const std::string & target) const
{
	std::string status[2] = {" is complete", " has failed"};

	std::cout << "DRrDDRrrrRRRRRrDDDDDDrrrrDRRRRRDRddddtrrrDRdrRdrrdrrrRD......." << std::endl;
	std::cout << "Robotomy on " << target << status[rand() % 2] << std::endl;
}





