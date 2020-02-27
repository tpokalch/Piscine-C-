
#include <iostream>
#include "Fixed.hpp"

int	Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return v;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->v = f.getRawBits();
}

std::ostream	Fixed::operator<<(std::ostream &o, Fixed &f)
{
	o << f.toFloat();
	return (o);
}



Fixed::Fixed(Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	v = a.getRawBits();

}

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	v = 0;
}

Fixed::toInt()
{
	std::cout << "Int constructor called\n";
}
