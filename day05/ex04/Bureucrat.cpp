
#include <iostream>
#include <stdexcept>
#include <string>

#include "Bureucrat.hpp"
#include "Form.hpp"

class Form;

std::ostream & operator<<(std::ostream & o, const Form & b)
{
	o << "Form " << b.getName() << ", signature required grade: " << b.getsGrade() << ", execution requared grade: " << b.geteGrade() << " , status: " << b.getStatus();
	return (o);
}

std::ostream & operator<<(std::ostream & o, const Bureucrat & b)
{
	o << b.getName() << ", bureucrat grade: " << b.getGrade() ;
	return (o);
}

Bureucrat &Bureucrat::operator=(const Bureucrat & b)
{
	grade = b.grade;
	return (*this);
}

Bureucrat::Bureucrat(const std::string s, int g):name(s), grade(g)
{
	if (grade > 150)
	{
		throw (/*GradeTooHighException*/Bureucrat::GradeTooHighException());
		return ;
	}
	else if (grade < 1)
	{
		throw (/*GradeToLowException*/Bureucrat::GradeTooLowException());
		return ;
	}
//	this->name = s;
//	this->grade = g;
}

Bureucrat::Bureucrat()
{
	return ;
}

Bureucrat::~Bureucrat()
{
	return ;
}

Bureucrat::Bureucrat(const Bureucrat &b):name(b.name), grade(b.grade)
{
//	this->name = b.name;
//	this->grade = b.grade;
}

const std::string	Bureucrat::getName() const
{
	return (name);
}

int		Bureucrat::getGrade() const
{
		return (grade);
}

void		Bureucrat::up()
{
	if (grade == 1)
		throw (Bureucrat::GradeTooHighException());
	else
		grade--;
}

void		Bureucrat::down()
{
	if (grade == 150)
		throw Bureucrat::GradeTooLowException();
	else
		grade++;
}

void		Bureucrat::signForm(Form &f)
{
//	*this;
	try
	{
//		std::cout << "be signed\n";
		f.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << *this << " cannot sign " << f << " because: "<< e.what() << std::endl;
	}
}


void		Bureucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception & e)
	{
		std::cout << *this << " cannot execute " << form << " becaue: " << e.what() << std::endl;
	}
//hoe to write else catch?
//	catch(std::exception & e)
//	{
//		std::cout << *this << " executes " << form;
//	}
}

