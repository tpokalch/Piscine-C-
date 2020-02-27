

#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
# include <iostream>



class Fixed
{
	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &				operator=(Fixed const &rhs);

		// Comparison
		bool				operator==(Fixed const &rhs) const;
		bool				operator!=(Fixed const &rhs) const;
		bool				operator<(Fixed const &rhs) const;
		bool				operator<=(Fixed const &rhs) const;
		bool				operator>(Fixed const &rhs) const;
		bool				operator>=(Fixed const &rhs) const;

		// Arithmetic
		Fixed				operator+(Fixed const &rhs);
		Fixed				operator-(Fixed const &rhs);
		Fixed				operator/(Fixed const &rhs);
		Fixed				operator*(Fixed const &rhs);

		// Increment / decrement
		Fixed &				operator++(void);
		Fixed				operator++(int);
		Fixed &				operator--(void);
		Fixed				operator--(int);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		static Fixed &		min(Fixed &a, Fixed &b);
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static Fixed &		max(Fixed &a, Fixed &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);
	private:
		int					_value;
		static const int	_fractionalBits;
		static const int	_power;
};

const int Fixed::_fractionalBits = 8;



Fixed::Fixed(void) : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	//std::cout << "Int constructor called" << std::endl;

	this->_value = value << Fixed::_fractionalBits;
}

Fixed::Fixed(float const value)
{
	//std::cout << "Float constructor called" << std::endl;

	this->_value = (int)roundf(value * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(Fixed const &src) : _value(src.getRawBits())
{
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	this->_value = rhs.getRawBits();

	return *this;
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return this->_value == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return this->_value != rhs.getRawBits();
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return this->_value < rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return this->_value <= rhs.getRawBits();
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return this->_value > rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return this->_value >= rhs.getRawBits();
}

Fixed Fixed::operator+(Fixed const &rhs)
{
	Fixed f;

	f.setRawBits(this->_value + rhs.getRawBits());
	return f;
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	Fixed f;

	f.setRawBits(this->_value - rhs.getRawBits());
	return f;
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	Fixed f;

	f.setRawBits((this->_value * rhs.getRawBits()) >> Fixed::_fractionalBits);
	return f;
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	Fixed f;

	f.setRawBits((this->_value << Fixed::_fractionalBits) / rhs.getRawBits());
	return f;
}

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int Fixed::toInt(void) const
{
	return this->_value >> Fixed::_fractionalBits;
}

float Fixed::toFloat(void) const
{
	return this->_value / (float)(1 << Fixed::_fractionalBits);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);



Fixed	parse_number(std::string s, int &pos);
Fixed	parse_factors(std::string s, int &pos);
Fixed	parse_sum(std::string s, int &pos);


Fixed	parse_number(std::string s, int &pos)
{
	Fixed nbr;

	while (s.at(pos) == ' ')
		pos++;

	if (s.at(pos) == '(')
	{
		pos++;
		nbr = parse_sum(s, pos);
		if (s.at(pos) == ')')
			pos++;
		return (nbr);
	}


	std::stringstream ss(s.substr(pos));
	float result;

	ss >> result;
	pos += ss.tellg();
	return (Fixed(result));
}

Fixed	parse_factors(std::string s, int &pos)
{
	Fixed	nbr;
	Fixed	nbr2;
	char	op;

	nbr = parse_number(s, pos);
	while ((size_t)pos < s.size())
	{
		while (s.at(pos) == ' ')
			pos++;

		op = s.at(pos);
		if (op != '/' && op != '*')
			return (nbr);

		pos++;
		nbr2 = parse_number(s, pos);

		if (op == '/')
			nbr = nbr / nbr2;
		else if (op == '*')
			nbr = nbr * nbr2;
	}
	return (nbr);
}

Fixed	parse_sum(std::string s, int &pos)
{
	Fixed	nbr;
	Fixed	nbr2;
	char	op;

	nbr = parse_factors(s, pos);

	while ((size_t)pos < s.size())
	{
		while (s.at(pos) == ' ')
			pos++;

		op = s.at(pos);
		if (op != '+' && op != '-')
			return (nbr);

		pos++;
		nbr2 = parse_factors(s, pos);

		if (op == '+')
			nbr = nbr + nbr2;
		else
			nbr = nbr - nbr2;
	}
	return (nbr);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "Usage: ./eval_expr (expression)" << std::endl;
		return (0);
	}

	int pos = 0;
	std::cout << parse_sum(argv[1], pos) << std::endl;
	return (0);
}




