
#include <iostream>
#include <stdexcept>
#include <string>

#include "Bureucrat.hpp"

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
