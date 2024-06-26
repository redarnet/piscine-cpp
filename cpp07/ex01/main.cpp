#include <iostream>
#include "iter.hpp"


template <typename T>
void	affiche_tab(int size, T *tab)
{
	for (int i = 0 ; i <= size; i++)
		std::cout << tab[i] << " |";
	std::cout << std::endl ;
}

template <typename P>
void min(P *x)
{
	*x = *x + *x;
}

int main( void )
{
	int a[7] = {3, 4, 6, 1, 52 , 24, 5};
	std:: string b[5] = {"salut ", "ca ", "va" , "moi ", "oui "};
	float c[7] = {3.42, 4.42, 6.44, 1.6, 52.7f , 24.355, 5};
	char d[5] = {37, 60, '*', 40 , 42};

	// tab int
	std::cout << "Tab int : " << std::endl;
	affiche_tab(6, a);
	iter(a, 6, min);
	affiche_tab(6, a);
	std::cout << "-------------------" << std::endl;
	// tab string
	std::cout << "Tab string : " << std::endl;
	affiche_tab(4, b);
	iter(b, 4, min);
	affiche_tab(4, b);
	std::cout << "-------------------" << std::endl;
	// tab float
	std::cout << "Tab float : " << std::endl;
	affiche_tab(6, c);
	iter(c, 6, min);
	affiche_tab(6, c);
	std::cout << "-------------------" << std::endl;
	// tab float
	std::cout << "Tab char : " << std::endl;
	affiche_tab(4, d);
	iter(d, 4, min);
	affiche_tab(4, d);
	return (0);
}
