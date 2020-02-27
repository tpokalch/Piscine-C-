
#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock()
{
	return ;
}


OfficeBlock::~OfficeBlock()
{
	return ;
}

void OfficeBlock::setIntern(Intern &i)
{
	intern = &i;
	return ;
}
//does intern(i) invoke copy constructor?
void OfficeBlock::setSigner(Bureucrat &s)
{
	signer = &s;
	return ;
}

void OfficeBlock::setExecutor(Bureucrat &s)
{
	executor = &s;
	return ;
}

OfficeBlock::OfficeBlock(Intern &a, Bureucrat &b, Bureucrat &c)
{
	setIntern(a);
	setSigner(b);
	setExecutor(c);
}

void	OfficeBlock::doBureucracy(const std::string &s, const std::string &target)
{
	Form *f;

	if (!intern || !signer || !executor)
	{
		throw Bureucrat::NoWorkersException();
		return ;
	}
//	try
	{

		if (!(f = intern->makeForm(s, target)))
		{
			std::cout << "intern couldn't make form\n";
			return ;
		}
	}
/*
	catch (std::exception &e)
	{
		std::cout << "intern.makeForm() failed because: " << e.what() << std::endl;
		return ;
	}
*/
//	try
	{	
//		std::cout << "signing form\n";
		signer->signForm(*f);
	}
//	catch (std::exception &e)
	{
//		std::cout << "signer.signForm() failed because: " << e.what() << std::endl;
//		return ;
	}
//	try
	{
//		std::cout << "executing form\n";
		executor->executeForm(*f);
	}
//	catch (std::exception &e)
	{
//		std::cout << "executor.executeForm() failed because: " << e.what() << std::endl;
//		return ;
	}
}


