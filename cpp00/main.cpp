#include "Phone_Book_Class.hpp"
#include "Contact_Class.hpp"
#include <iostream>
#include <string>


void	ft_add(Phonebook repertoire)
{}

void	ft_search(Phonebook repertoire)
{}

int	ft_strlen(std::string s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return i;
}
int	ft_strncmp(std::string s1, const char *s2, int n)
{
	std::string str1;
	unsigned char	*str2;
	int			i;

	str1 = s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		if (str1[i] == '\0' && str2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
int main()
{
	Phonebook	repertoire;

	std::string name;
//	char	*name;
	while (1)
	{
		std::getline(std::cin, name);
		if (ft_strncmp(name, "ADD", 3) == 0 && ft_strlen(name) == 3)
			ft_add(repertoire);
		else if (ft_strncmp(name, "ADD", 3) == 0 && ft_strlen(name) == 3)
			ft_search(repertoire);
		else if (ft_strncmp(name, "EXIT", 4) == 0 && ft_strlen(name) == 4)
			return (0);
	}
    return 0;
}
