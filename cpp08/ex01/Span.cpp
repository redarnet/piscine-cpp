#include "Span.hpp"
#include <iostream>
#include <algorithm>


Span::Span(void)
{
        return ;
}

Span::Span(int _N) : _N(_N)
{
        return ;
}

Span::~Span(void)
{
        return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}


Span & Span::operator=(Span const & rhs)
{
        std::cout << "Copy assignment operator called" << std::endl;
		this->_N = rhs._N;
		this->lst = rhs.lst;
        return *this;
}


int		Span::getNum() const
{
	return this->_N;
}

std::ostream & operator<<(std::ostream & o, Span const & rhs)
{
	o << rhs.getNum();
	return o;
}

void	Span::addNumber(int x)
{
	this->lst.push_back(x);
}

int abs(int a)
{
	if (a < 0)
		return -a;
	return a;
}
int	Span::shortestSpan(void)
{
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator it2;
	std::list<int>::const_iterator ite = this->lst.end();
	int		x;

	it = lst.begin();
	it2 = lst.begin();
	it2++;
	if (_N <= 1)
		return 0;
	x = abs(*it - *it2);
	for (it =  lst.begin() ; it2 != ite; it++)
	{
		if (abs(*it - *it2) < x)
			x =  abs(*it - *it2);
		it2++;
	}
	return x;
}

int	Span::longestSpan(void)
{
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator it2;
	std::list<int>::const_iterator ite = this->lst.end();
	int		x;

	it = lst.begin();
	it2 = lst.begin();
	it2++;
	if (_N <= 1)
		return 0;
	x = abs(*it - *it2);
	for (it =  lst.begin() ; it2 != ite; it++)
	{
		if (abs(*it - *it2) > x)
			x =  abs(*it - *it2);
		it2++;
	}
	return x;
}

void	Span::affiche_list()
{
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator ite = this->lst.end();

	for (it =  lst.begin() ; it != ite; it++)
		std::cout << *it << std::endl;

}
