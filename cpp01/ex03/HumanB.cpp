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
	if (this->_weapon ==  NULL)
	{
		std::cout << this->_name << "has no weapon" << std::endl;
		return;
	}
	std::cout << this->_name << " attacks with their " <<  this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}
