#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
// #include "bsp.cpp"

bool bsp(Point const  a, Point const b, Point const c, Point const point)
{
	std::cout << a.getFixed() << std::endl;
	std::cout << b.getFixed() << std::endl;
	std::cout << c.getFixed() << std::endl;
	std::cout << point.getFixed() << std::endl;
	return true;
}


bool test(Point const & a, Point const &b, Point const &c, Point const& point)
{
	bsp(a, b, c, point);
	return true;
}
int main( void )
{
	Point a(2.02f, 2);
	Point b(-5, 3);
	Point c(24 , 5);
	Point point;

	 std::cout << a.getFixed() << std::endl;
	 std::cout << b.getFixed() << std::endl;
	 std::cout << c.getFixed() << std::endl;
	test(a, b , c , point);

	return 0;
}
