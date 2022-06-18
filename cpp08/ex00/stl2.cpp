#include <iostream>
#include <map>
#include <vector>
#include <list>

class Ioperation;

int main()
{
	std::list<int>		lst1;
	std::map<std::string, Ioperation*> map1;
	std::vector<int>	v1;
	std::vector<int>	v2(42, 100);

	lst1.push_back(2);
	lst1.push_back(13);
	lst1.push_back(4);

/*
	map1["opA"] = new OperationA;
	map1["opB"] = new OperationB;
	*/

	std::list<int>::const_iterator it = lst1.begin();
	std::list<int>::const_iterator ite = lst1.end();
	for (it ; it != ite ; ++it)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}
