#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name)
{
	Zombie randomChump = Zombie(name);
	randomChump.annouce();
}
