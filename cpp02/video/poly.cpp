


#include <iostream>
#include "poly.hpp"

Poly::Poly(void)
{
	std::cout << "constructeur called" << std::endl;
	return ;
}

Poly::~Poly(void)
{
	std::cout << "constructeur called" << std::endl;
	return ;
}

void	Poly::bar(char const c ) const
{
	std::cout << "Member fonction bar  called with char " << c << std::endl;
	return ;
}

void	Poly::bar(int const n) const
{
	std::cout << "Member fonction bar  called with int " << n << std::endl;
	return ;
}

void	Poly::bar(float const f ) const
{
	std::cout << "Member fonction bar  called with  f " << f << std::endl;
	return ;
}

void	Poly::bar(Poly const & i) const
{
	(void)i;
	std::cout << "Member fonction bar  called with  " << std::endl;
	return ;
}


int main()
{
	int i;
	Poly poly;
	i = 3;

	poly.bar('c');
	poly.bar(42);



}
