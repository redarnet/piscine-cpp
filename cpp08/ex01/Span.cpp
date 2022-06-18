#include "Span.hpp"
#include <iostream>
#include <algorithm>


Span::Span(void)
{
        std::cout << "Default constructor Span called" << std::endl;
        return ;
}

Span::Span(int _N) : _N(_N)
{
        return ;
}

Span::~Span(void)
{
        std::cout << "Default Destructor Span called" << std::endl;
        return ;
}

Span & Span::operator=(Span const & rhs)
{
        std::cout << "Copy assignment operator called" << std::endl;
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

void	Span::shortestSpan(void)
{
}

void	Span::longestSpan(void)
{

}

void	Span::affiche_list()
{
	std::list<int>::const_iterator it = this->lst.begin();
	std::list<int>::const_iterator ite = this->lst.end();

	for (it ; it != ite; it++)
		std::cout << get*it << std::endl;

}
