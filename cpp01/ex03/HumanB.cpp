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
	std::cout << type ;
	std::cout << "HumanB attack" << std::endl;
}

void HumanB::setWeapon(Weapon _weapon)
{
	*type = _weapon;
}
