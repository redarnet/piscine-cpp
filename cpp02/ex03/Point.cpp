#include "Point.hpp"
#include <iostream>

Point::Point(void) : _x(0) , _y(0)
{
        return ;
}

Point::Point(const Point & src)
{
	*this = src;
        return ;
}

Point::Point(const Fixed x,const Fixed  &y) : _x(x) , _y(y)
{
	return ;
}

Point::~Point(void)
{
	std::cout << this->_x ;
        return ;
}

int	Point::getValue() const
{
	return this->_n;
}

Point & Point::operator=(Point const & rhs)
{
        this->_n = rhs.getValue();
        return *this;
}

Fixed Point::getFixed() const
{
	return this->_x;
}
