
#pragma once

#include "Bureucrat.hpp"
#include "Form.hpp"

class Bureucrat;

class Form
{
	private:
		bool status;
		const std::string name;
		const int rsign;
		const int rexec;
	public:
		Form(const std::string, int, int);
		Form();
		~Form();
		Form(const Form &);
		Form &operator=(const Form & b);

		const std::string	getName() const;
		int	getsGrade() const;
		int	geteGrade() const;
		bool	getStatus() const;

		void	beSigned(const Bureucrat & b);

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



