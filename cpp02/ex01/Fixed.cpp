
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	this->_n = n << _b;
}

Fixed::Fixed(float const n) : _n(n * 256)
{
	std::cout << "Float constructor called" << std::endl;
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
	return ((float)this->_n / 256);
}


int Fixed::toInt(void) const
{
	return (this->_n >> _b);
}

std::ostream & operator<<(std::ostream & a, Fixed const & rhs)
{
	a << rhs.toFloat();
	return a;
}
