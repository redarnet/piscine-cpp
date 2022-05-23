
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string _name) : _energy(10), _attack(0), _hit(10)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

int		ClapTrap::getValue(void) const
{
	return this->_n;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 1)
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks "  << target << " causing " << this->_attack
			<< " points of damage "<< std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << "has no energy" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit = this->_hit - amount;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit = this->_hit + amount;
	std::cout << "ClapTrap " << this->_name << " heal " << amount << " points of damage"<<std::endl;
}


