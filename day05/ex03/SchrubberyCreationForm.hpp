
#pragma once

#include "Form.hpp"

class SchrubberyCreationForm: public Form
{
	public:

		void	action(const std::string & target) const;

		SchrubberyCreationForm(const std::string & target);
		SchrubberyCreationForm();
		~SchrubberyCreationForm();
		SchrubberyCreationForm(const SchrubberyCreationForm &);
		SchrubberyCreationForm &operator=(const SchrubberyCreationForm & b);
};
