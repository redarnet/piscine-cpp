#include <iostream>
#include "Contact_Class.hpp"

Contact::Contact(void)
{
//    std::cout << "Constructeur called" << std::endl;
    return;
}

Contact::~Contact(void)
{
  //  std::cout << "Destructeur called" << std::endl;
    return;
}

void	Contact::add_contact(void)
{
	int i;
	int j;

	j = 0;
	std::cout << "Prenom" << std::endl;
	std::cin >> prenom;
	std::cout << "Nom de famille" << std::endl;
	std::cin >> famille;
	std::cout << "Surnom" << std::endl;
	std::cin >> surnom;
	while (j != 1)
	{
		j = 1;
		i = 0;
		std::cout << "Telephone" << std::endl;
		std::cin >> telephone;
		while (telephone[i] != '\0')
		{
			if (!isdigit(telephone[i]))
				 j = 0;
			i++;
		}
	}

	//std::cin >> this->telephone;
}

void	Contact::search_contact(void)
{
	std::cout << prenom<< std::endl;
	std::cout << famille<< std::endl;
	std::cout << surnom<< std::endl;
	std::cout << telephone<< std::endl;
}
