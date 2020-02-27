
#ifndef LOGER_HPP
#define LOGER_HPP

class Loger
{
	public:
		Loger();
		Loger(std::string);
		std::string filename;
		void log(std::string const & dst, std::string const & message);
	private:
		void logToConsole(std::string);
		void logToFile(std::string);
		std::string makeLogEntry(std::string);
};

#endif
