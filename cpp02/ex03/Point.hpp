#ifndef POINT_H
# define POINT_H

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const Point & src);
		Point(const Fixed & x, const & Fixed y);
		~Point(void);
		Point & operator=(Point const & rhs);
		int getValue() const ;
		Fixed getFixed() const;

	private:
		int _n;
		Fixed _x;
		Fixed _y;
};


#endif
