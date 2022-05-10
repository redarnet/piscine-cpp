#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string _name)
{
	this->_name = _name;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "zzZ..." << std::endl;
	return;
}

void	Zombie::annouce(void)
{

	std::cout << "[" << this->_name  << "]";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
