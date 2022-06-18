#include <iostream>
#include <algorithm>
#include <list>

void display(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::list<int> lst;

	lst.push_back(10);
	lst.push_back(50);
	lst.push_back(14);
	lst.push_back(30);
	lst.push_back(63);

	for_each(lst.begin(), lst.end(), display);
	return 0;
}



