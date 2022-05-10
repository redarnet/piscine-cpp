#include "Zombie.hpp"
#include <iostream>




Zombie *zombieHorde(int N, std::string name)
{
	int i;

	i = 0;
	Zombie *zombieHorde = new Zombie[N + 1];

	while (i != N)
	{
		zombieHorde[i].setName("ee");
		i++;
	}
	zombieHorde[i].setName(name);
	return zombieHorde;
}


