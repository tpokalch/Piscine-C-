
#include "Form.hpp"
#include "Bureucrat.hpp"

Form::Form(const std::string s, std::string t, int g, int a):name(s), target (t), rsign(g), rexec(a)
{
	if (rsign > 150 || rexec > 150)
	{
		throw (/*GradeTooHighException*/Bureucrat::GradeTooHighException());
		return ;
	}
	else if (rsign < 1 || rexec < 1)
	{
		throw (/*GradeToLowException*/Bureucrat::GradeTooLowException());
		return ;
	}
//	this->name = s;
//	this->grade = g;
}

Form::Form():rsign(1), rexec(1) 
{
	return ;
}

Form::~Form()
{
	return ;
}

Form::Form(const Form &b):name(b.name), target(b.getTarget()), rsign(b.rsign), rexec(b.rexec)
{
//	this->name = b.name;
//	this->grade = b.grade;
}

const std::string	Form::getName() const
{
	return (name);
}

bool	Form::getStatus() const
{
	return (status);
}



int		Form::getsGrade() const
{
		return (rsign);
}

int		Form::geteGrade() const
{
		return (rexec);
}


const std::string	Form::getTarget() const
{
		return (target);
}




void	Form::execute(const Bureucrat & executer) const
{
	if (!status)	
	{
		throw (Bureucrat::FormNotSignedException());
	}
	else if (geteGrade() < executer.getGrade())
	{

		throw (Bureucrat::GradeTooLowException());
	}
	else
		action(getTarget());
}

void	Form::beSigned(const Bureucrat & b)
{
	if (b.getGrade() > getsGrade())
		throw (Bureucrat::GradeTooLowException());
	else
		status = 1;
}
