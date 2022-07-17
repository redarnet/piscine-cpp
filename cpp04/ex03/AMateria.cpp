#include "AMateria.hpp"
#include "ICharacter.hpp"
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

void AMateria::use(ICharacter & target)
{
	std::cout << "* shoots an ice bold at " << target.getName() << " *" << std::endl;
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

Ice::Ice(Ice const & src)
{
	*this = src;
	return;
}

Ice::~Ice(void)
{
	return;
}

Ice & Ice::operator=(Ice const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bold at " << target.getName() << " *" << std::endl;
}

AMateria * Ice::clone() const
{
	AMateria *tmp = new Ice;

	return tmp;
}

Cure::Cure(void)
{
	this->_type = "cure";
	return;
}


Cure::Cure(Cure const & src)
{
	*this = src;
	return;
}

Cure & Cure::operator=(Cure const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

Cure::~Cure(void)
{
	return;
}

 void 	Cure::use(ICharacter & target)
 {
 	 std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
 }

AMateria * Cure::clone() const
{
	AMateria *tmp = new Cure;

	return tmp;
}
