#include "Weapon.hpp"

Weapon::Weapon(std::string const & type): _type(type)
{
	return ;
}
Weapon::~Weapon(void)
{
	return ;
}

std::string const *Weapon::getType(std::string _weapon)
{
	return &(this->_type);
}

std::string const &Weapon::setType(std::string _weapon)
{
	this->_type = _weapon;
	return this->_type;
}


