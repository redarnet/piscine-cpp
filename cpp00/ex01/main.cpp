#include "Phone_Book_Class.hpp"
#include "Contact_Class.hpp"
#include <iostream>
#include <string>


int main()
{
	Phonebook	repertoire;
	std::string name;

	while (1)
	{
		std::cout << "Phonebook > ";
		std::cin >> name;
		if (name.compare("ADD") == 0)
			repertoire.ft_add();
		else if (name.compare("SEARCH") == 0)
			repertoire.ft_search();
		else if (name.compare("EXIT") == 0)
			return (0);
	}
	return 0;
}
