
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _n(_n)
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
	return ;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = n;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = n;

}


Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "GetRawBits member function called" << std::endl;
	return this->_n;
}


void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

float Fixed::toFloat(void) const
{
	return (float(this->_n));
}


float Fixed::toInt(void) const
{
	return (int(this->_n));
}

std::ostream & operator<<(std::ostream & a, Fixed const & rhs)
{
	a << rhs.toFloat();
	return a;
}
