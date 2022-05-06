#include "Phone_Book_Class.hpp"
#include "Contact_Class.hpp"
#include <iostream>
#include <string>



int	ft_strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return i;
}
int	ft_strncmp(char *s1, const char *s2, int n)
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
	char  name[512];


	while (1)
	{
		std::cout << "Phonebook > ";
		std::cin >> name;
		if (ft_strncmp(name, "ADD", 3) == 0 && ft_strlen(name) == 3)
			repertoire.ft_add();
		else if (ft_strncmp(name, "SEARCH", 6) == 0 && ft_strlen(name) == 6)
			repertoire.ft_search();
		else if (ft_strncmp(name, "EXIT", 4) == 0 && ft_strlen(name) == 4)
			return (0);
	}
    return 0;
}
