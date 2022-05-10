
#include "Zombie.hpp"
#include <iostream>

void	annouce_horde()
{

}

int main()
{
	Zombie *Charles =  zombieHorde(4, "Charles");
	int i;
//	Zombie *zombieHorde = new Zombie[42];

	i = 0;
	while (i != 5)
	{
		Charles[i].annouce();
		i++;
	}
	delete [] Charles;

	return (0);

}
