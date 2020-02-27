


#include <iostream>
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cmath>

class	Fixed 
{

	public:

		Fixed(void);
		Fixed(Fixed const &input);
		Fixed(int const input);
		Fixed(float const input);
		~Fixed(void);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

		float		toFloat(void) const;
		int			toInt(void) const;

		Fixed 		&operator=(Fixed const &r);

		bool		operator>(Fixed const &r);
		bool		operator<(Fixed const &r);
		bool		operator>=(Fixed const &r);
		bool		operator<=(Fixed const &r);
		bool		operator==(Fixed const &r);
		bool		operator!=(Fixed const &r);

		Fixed 		operator+(Fixed const &r);
		Fixed 		operator-(Fixed const &r);
		Fixed 		operator*(Fixed const &r);
		Fixed 		operator/(Fixed const &r);

		Fixed 		&operator++(void);
		Fixed		operator++(int input);
		Fixed 		&operator--(void);
		Fixed		operator--(int input);

		static Fixed		&min(Fixed 	 	 &l, Fixed 		 &r);
		static Fixed		&max(Fixed 	 	 &l, Fixed 		 &r);
		static Fixed const	&min(Fixed const &l, Fixed const &r);
		static Fixed const	&max(Fixed const &l, Fixed const &r);

	private:

		int					_value;
		static	int	const	_num;


}; 

std::ostream	&operator<<(std::ostream &o, Fixed const &r);



#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

Fixed::Fixed(void) : _value(0)
{
	return;
}

Fixed::Fixed(Fixed const &input)
{
	*this = input;
	return;
}

Fixed::Fixed(int const input)
{
	setRawBits(input << this->_num);
	return;
}

Fixed::Fixed(float const input)
{
	setRawBits(roundf(input * (1 << this->_num)));
	return;
}

Fixed::~Fixed(void)
{
	return;
}

/*
** Below are _value manipulation
*/

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return;
}

int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_num);
}

float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << this->_num));
}

/*
** Below are bool expression operations
*/

bool	Fixed::operator>(Fixed const &r)
{
	return (this->toFloat() > r.toFloat());
}

bool	Fixed::operator<(Fixed const &r)
{
    return (this->toFloat() < r.toFloat());
}

bool	Fixed::operator>=(Fixed const &r)
{
    return (this->toFloat() >= r.toFloat());
}

bool	Fixed::operator<=(Fixed const &r)
{
    return (this->toFloat() <= r.toFloat());
}

bool	Fixed::operator==(Fixed const &r)
{
    return (this->toFloat() == r.toFloat());
}

bool	Fixed::operator!=(Fixed const &r)
{
    return (this->toFloat() != r.toFloat());
}

/*
** Below are basic math arithmetic operations
*/

Fixed	&Fixed::operator=(Fixed const &r)
{
	if (this != &r)
		this->_value = r.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &r)
{
	return (Fixed(this->_value + r.getRawBits()));
}

Fixed	Fixed::operator-(Fixed const &r)
{
	return (Fixed(this->_value - r.getRawBits()));
}

Fixed	Fixed::operator*(Fixed const &r)
{
	return (Fixed(this->toFloat() * r.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &r)
{
	if (r.toFloat() != 0)
		return (Fixed(this->toFloat() / r.toFloat()));
	else
	{
		std::cout << "Cannot divide by 0, resolving results to 0." << std::endl;
		return (Fixed(0));
	}
}

Fixed	&Fixed::operator++(void)
{
	this->_value = this->_value + 1;
	return (*this);
}

Fixed	Fixed::operator++(int input)
{
	Fixed fplus(*this);
	(void)input;

	this->_value = this->_value + 1;
	return (fplus);
}

Fixed	&Fixed::operator--(void)
{
	this->_value = this->_value - 1;
	return (*this);
}

Fixed	Fixed::operator--(int input)
{
	Fixed fminus(*this);
	(void)input;
	
	this->_value = this->_value - 1;
	return (fminus);
}

/*
** Below are min/max operations
*/

Fixed	&Fixed::min(Fixed &l, Fixed &r)
{
	return ((l.toFloat() < r.toFloat()) ? l : r);
}

Fixed 	&Fixed::max(Fixed &l, Fixed &r)
{
	return ((l.toFloat() > r.toFloat()) ? l : r);
}

Fixed const		&Fixed::min(Fixed const &l, Fixed const &r)
{
	return ((l.toFloat() < r.toFloat()) ? l : r);
}

Fixed const		&Fixed::max(Fixed const &l, Fixed const &r)
{
	return ((l.toFloat() > r.toFloat()) ? l : r);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &r)
{
	o << r.toFloat();
	return (o);
}

int	const	Fixed::_num = 8;

int				isOp(char c, int *p)
{
	if (c == '(' || c == ')')
	{
		*p = *p + 1;
		return (1);
	}
	else if (c == '+' || c == '-' || c == '*' || c == '/')
		return (1);
	return (0);
}

std::string		rpn(std::string str)
{
	// int i = 0;
	int num = 0;
	int p = 0;
	int oper = 0;
	float number = 0;
	std::ostringstream ret;
	std::string op = "";
	std::string::size_type size = 0;

	while(str[0] != '\0')
	{
		std::cout << "GOING THROUGH " << str[0] << std::endl;
		if (isOp(str[0], &p))
		{
			if (str[0] != '(' && str[0] != ')')
				op = op + str[0];
			oper++;
			str = str.substr(1, str.length());
			std::cout << "OP STR " << op << " OPER " << oper << std::endl;
			if (num == 2)
			{
				std::cout << "FUCK" << op[oper - 1] << std::endl;
				ret << op[oper - 1] << " ";
				op = op.substr(1, (op.length() - 1));
				oper--;
				num--;
			}
		}
		else if (str[0] != ' ')
		{
			number = std::stof(str, &size);
			ret << number << " ";
			str = str.substr(size, str.length());
			num++;
			std::cout << "RET STR " << ret << " num value " << num << std::endl;
		}
		else
			str = str.substr(1, str.length());
		size = 0;
	}
	std::string	retur(ret.str());
	return (retur);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please provide one arguement with a valid arithmetic equation you'd like to resolve." << std::endl;
		return (0);
	}
	Fixed *ret = new Fixed(0);
	std::string input = av[1];
	std::string equation = rpn(input);
	std::cout << "EQUATION " << equation << std::endl;
	delete ret;
	return (0);
}
