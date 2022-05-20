#include <iostream>
#include "Phone_Book_Class.hpp"
#include <string>

Phonebook::Phonebook(void)
{
	this->nb = 0;
	this->count = -1;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void	Phonebook::ft_search(void)
{
	int index;
	int i;
	char	tmp[512];


	i = 0;
	std::cout << "| Index    " ;
	std::cout << "|Famille   " ;
	std::cout << "|Surnom    " ;
	std::cout << "|Telephone |" << std::endl;
	while (i != nb)
	{
		contacts[i].ft_affiche_contact();
		std::cout << "|";
		std::cout<< std::endl;
		i++;
	}
	std::cout << "Index" << std::endl;
	std::cin >> tmp;
	if (!isdigit(tmp[0]))
	{
		std::cout << "Mauvais index" << std::endl;
		return ;
	}
	index = atoi(tmp);
	if (index <= count)
		contacts[index].search_contact();
	else
		std::cout << "Mauvais index" << std::endl;


}

void	Phonebook::ft_add(void)
{
	if (count < 7)
		this->count++;
	if (nb > 7)
		this->nb = 0;
	std::cout << nb << std::endl;
	contacts[nb].add_contact();
	this->nb++;
}
