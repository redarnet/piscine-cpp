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
		easyfind(lst, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "Nothing" << std::endl;
	}
	return (0);
}
