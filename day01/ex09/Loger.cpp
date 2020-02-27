#include <fstream>
#include <iostream>
#include "Loger.hpp"

Loger::Loger(std::string filename)
{
	this->filename = filename;
}

std::string Loger::makeLogEntry(std::string message)
{
	std::string ret;

	ret = "|2019/12/04 " + message + "|\n";

	return (ret);
}

void Loger::logToConsole(std::string message)
{
	message = this->makeLogEntry(message);
	std::cout << message;
}

void Loger::logToFile(std::string message)
{
	std::ofstream outputfile(this->filename);

	message = this->makeLogEntry(message);
	outputfile << message;
}



void Loger::log(std::string const & dst, std::string const & message)
{
	std::string dsts[2] = {"console", "file"};
	void (Loger::*fun[])(std::string) = {&Loger::logToConsole, &Loger::logToFile};

	int i;
	for (i = 0; i < 2; i++)
		if (dsts[i] == dst)
			break;
	if (i == 2)
	{
		std::cout << "no such path\n";
		return ;
	}
	(this->*fun[i])(message);
}



