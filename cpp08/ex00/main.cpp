#include <iostream>
#include <algorithm>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::list <int>		lst;

	lst.push_back(10);
	lst.push_back(50);
	lst.push_back(14);
	lst.push_back(30);
	lst.push_back(63);
	try
	{
		std::cout << easyfind(lst, 3) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Nothing" << std::endl;
	}
	return (0);
}
