#include <iostream>
#include <cstring>
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
}

void	Contact::search_contact(void)
{
	std::cout << prenom<< std::endl;
	std::cout << famille<< std::endl;
	std::cout << surnom<< std::endl;
	std::cout << telephone<< std::endl;
}

void	affiche_contact(std::string str)
{
	int i;
	int j;

	i = str.length();
	j = 0;
	if (i < 9)
	{
		std::cout << "|" << str;
		while (i != 10)
		{
			std::cout<< " ";
			i++;
		}
	}
	else if (i >= 9)
	{
		std::cout << "|";
		while (j != 9)
		{
			std::cout << str[j];
			j++;
		}
		std::cout<< ".";
	}
}

void	Contact::ft_affiche_contact(void)
{
	affiche_contact(prenom);
	affiche_contact(famille);
	affiche_contact(surnom);
	affiche_contact(telephone);
}
