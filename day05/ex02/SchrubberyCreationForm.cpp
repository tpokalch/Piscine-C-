
#include "SchrubberyCreationForm.hpp"
#include <fstream>

SchrubberyCreationForm::SchrubberyCreationForm(const std::string & t):Form("Schrubbery Creation Form", t, 72, 45)
{
	return ;
}

SchrubberyCreationForm::SchrubberyCreationForm():Form("Schrubbery Creation Form", "", 1, 1)
{
	return ;
}

SchrubberyCreationForm::~SchrubberyCreationForm()
{
	return ;
}

SchrubberyCreationForm::SchrubberyCreationForm(const SchrubberyCreationForm &b):Form("Schrubbery Creation Form", b.getTarget(), b.getsGrade(), b.geteGrade())
{

}

void SchrubberyCreationForm::action(const std::string & target) const
{

	std::ofstream outfile(target+"_schrubbery");

	outfile << "THIS IS AN ASCII TREE /|\\";
}
