
#include "Form.hpp"
#include "Bureucrat.hpp"

Form::Form(const std::string s, int g, int a):name(s), rsign(g), rexec(a)
{
	if (rsign > 150 || rexec > 150)
	{
		throw (/*GradeTooHighException*/Form::GradeTooHighException());
		return ;
	}
	else if (rsign < 1 || rexec < 1)
	{
		throw (/*GradeToLowException*/Form::GradeTooLowException());
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

Form::Form(const Form &b):name(b.name), rsign(b.rsign), rexec(b.rexec)
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


/*

std::ostream & operator<<(std::ostream & o, const Form & b)
{
	o << "Form " << b.getName() << ", signature required grade: " << b.getsGrade() << ", execution requared grade: " << b.geteGrade() << " , status: " << b.getStatus() << std::endl;
	return (o);
}
*/
void	Form::beSigned(const Bureucrat & b)
{
	if (b.getGrade() > getsGrade())
		throw (Form::GradeTooLowException());
	else
		status = 1;
}
