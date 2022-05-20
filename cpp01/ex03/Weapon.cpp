#include "Weapon.hpp"

Weapon::Weapon(std::string const & name): _type(name)
{
	return ;
}
Weapon::~Weapon(void)
{
	return ;
}

std::string const &Weapon::getType()
{
	return (this->_type);
}

std::string const &Weapon::setType(std::string str)
{
	this->_type = str;
	return this->_type;
}


