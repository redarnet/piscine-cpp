#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::attack()
{
	//?.getType(_weapon);
	std::cout << this->_name << " attacks with their " <<  this->_weapon.getType() << std::endl;
}

