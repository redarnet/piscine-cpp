#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	return ;
}


const std::string &AMateria:: getType() const
{
	return this->_type;
}


AMateria::AMateria(void)
{
	return;
}

AMateria::~AMateria(void)
{
	return;
}

Ice::Ice(void)
{
	this->_type = "ice";
	return;
}

Ice::~Ice(void)
{
	return;
}

 void 	Ice::use(ICharacter & target)
 {
 	// std::cout << "* shoots an ice bold at " << target << " *" << std::endl;
	(void)target;
 }

AMateria * Ice::clone() const
{
	// this->_type = clone._type;
	return  * this;
}

Cure::Cure(void)
{
	this->_type = "ice";
	return;
}


Cure::~Cure(void)
{
	return;
}

 void 	Cure::use(ICharacter & target)
 {
 	// std::cout << "* helas " << target << "'s wounds *" << std::endl;
	(void)target;
 }

// virtual AMateria Cure::clone(Cure const & clone) const
// {
// 	// this->_type = clone._type;
// 	return *this;
// }
