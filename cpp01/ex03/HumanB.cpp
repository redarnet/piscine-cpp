#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::attack()
{
	std::cout << this->_weapon->getType() ;
	std::cout << "HumanB attack" << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}
