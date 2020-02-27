
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
};

