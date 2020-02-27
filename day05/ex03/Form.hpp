
#pragma once

#include "Bureucrat.hpp"

class Bureucrat;

class Form
{
	private:
		 bool status;
		 const std::string name;
		 const std::string target;
		 const int rsign;
		 const int rexec;
		virtual void action(const std:: string & targer) const = 0;
	public:
		 Form(const std::string, std::string, int, int);
		Form();
		~Form();
		Form(const Form &);
		Form &operator=(const Form & b);

		virtual const std::string	getName() const;
		virtual const std::string	getTarget() const;
		virtual int	getsGrade() const;
		virtual int	geteGrade() const;
		virtual bool	getStatus() const;

		void	beSigned(const Bureucrat & b);
		virtual	void execute(const Bureucrat & b) const;
};



