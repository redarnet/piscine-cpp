#include <iostream>
#include "operator.hpp"

integer::integer(int const n) : _n(n)
{
	std::cout << "constructor called with value " << n << std::endl;
	return ;
}

integer::~integer(void)
{
	std::cout << "destructor called with value " <<this->_n << std::endl;
	return ;
}

int integer::getValue() const
{
	return this->_n;
}

integer & integer::operator=(integer const & rhs)
{
	std::cout << "assignation ope with " <<this->_n ;
	std::cout << " to " << rhs.getValue() << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

integer  integer::operator+(integer const & rhs) const
{
	std::cout << "addition ope with " <<this->_n ;
	std::cout << " and " << rhs.getValue() << std::endl;
	return integer(this->_n + rhs.getValue());
}

std::ostream & operator<<(std::ostream & a, integer const & rhs)
{
	a << rhs.getValue();
	return a;
}

int main()
{
	integer x(30);
	integer y(10);
	integer z(0);

	std::cout << "value of x : " << x << std::endl;
	// << qui permet l affichage
	std::cout << "value of y : " << y << std::endl;
	y = integer(12);
	std::cout << "value of y : " << y << std::endl;
	std::cout << "value of z : " << z << std::endl;
	z = x + y;
	std::cout << "value of z : " << z << std::endl;
}

