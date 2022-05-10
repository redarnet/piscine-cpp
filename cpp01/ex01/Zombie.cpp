#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(): _name()
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "zzZ..." << std::endl;
	return;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::annouce()
{
	std::cout << "[" << this->_name  << "]";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
