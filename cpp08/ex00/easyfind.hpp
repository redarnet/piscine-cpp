#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <map>
#include <vector>
#include <list>


template <typename T>
int easyfind(T  elem, int x)
{
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator ite = elem.end();

	for (it = elem.begin() ; it != ite; it++)
	{
		if (*it == x)
			return *it;
	}
	throw std::exception();
	return (0);
}

#endif
