
#include <iostream>
#include <stdexcept>
#include <string>

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

std::ostream & operator<<(std::ostream & o, const Bureucrat & b)
{
	o << b.getName() << ", bureucrat grade: " << b.getGrade() << std::endl;
	return (o);
}
