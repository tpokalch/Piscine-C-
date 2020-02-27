
#pragma once

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureucrat.hpp"

class OfficeBlock
{
	private:
		Intern *intern;
		Bureucrat *signer;
		Bureucrat *executor;
	public:
		OfficeBlock();
		OfficeBlock(Intern &, Bureucrat &, Bureucrat &);
		~OfficeBlock();

		void setIntern(Intern &);
		void setSigner(Bureucrat &);
		void setExecutor(Bureucrat &);

		void	doBureucracy(const std::string &s, const std::string &t);
};
