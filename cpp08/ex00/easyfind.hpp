#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <map>
#include <vector>
#include <list>

void		display(int i, int x)
{
	if (i == x)
		throw std::exception();
}

template <typename T>
int easyfind(T  elem, int x)
{
	std::list<int>::const_iterator it = elem.begin();
	std::list<int>::const_iterator ite = elem.end();

	//for_each(elem.begin(), elem.end(), display);
	try
	{
		for (it ; it != ite; it++)
			display(*it, x);
	}
	catch (std::exception &e)
	{
		std::cout << *it << std::endl;
		return (*it);
	}
	throw std::exception();
	return (0);
}

#endif
