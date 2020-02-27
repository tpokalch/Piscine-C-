
#pragma once

#include "Form.hpp"
#include <string>
#include <iostream>
#include <string>

class Form;

class Bureucrat
{
	private:
		const	std::string name;
		int	grade;
	public:
		Bureucrat(const std::string, int);
		Bureucrat();
		~Bureucrat();
		Bureucrat(const Bureucrat &);
		Bureucrat &operator=(const Bureucrat & b);

		const std::string	getName() const;
		int	getGrade() const;
		void	up();
		void	down();
		void	signForm(Form &f);
		void	executeForm(Form const & form) const;
		class GradeTooHighException:public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Grade Too High Exception");
				}
		};
		class GradeTooLowException:public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Grade Too Low Exception");
				}
		};
		class FormNotSignedException:public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form Not Signed Exception");
				}
		};
		class NoWorkersException:public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("No Workers Exception");
				}
		};
		class NoSuchFormException:public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("No Such Form Exception");
				}
		};





};

