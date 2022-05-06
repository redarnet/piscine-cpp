#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "zzZ..." << std::endl;
	return;
}

void	Zombie::annouce(void)
{
	std::cout << "[" << this->name  << "]";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
