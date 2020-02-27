
#pragma once

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
//	private:
//		const std::string target;
	public:

		void	action(const std::string & target) const;

		PresidentialPardonForm(const std::string & target);
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm &operator=(const PresidentialPardonForm & b);
};
