
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string _name)
{
	this->_name = _name;
	this->_attack = 100;
	this->_energy = 50;
	this->_hit = 100;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

int		DiamondTrap::getValue(void) const
{
	return this->_n;
}

void	DiamondTrap::attack(const std::string &target)
{
	if (this->_energy > 1)
	{
		this->_energy--;
		std::cout << "DiamondTrap " << this->_name << " attacks "  << target << " causing " << this->_attack
			<< " points of damage "<< std::endl;
	}
	else
		std::cout << "DiamondTrap " << this->_name << "has no energy" << std::endl;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	this->_hit = this->_hit - amount;
	std::cout << "DiamondTrap " << this->_name << " take " << amount << " points of damage"<<std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	this->_hit = this->_hit + amount;
	std::cout << "DiamondTrap " << this->_name << " heal " << amount << " points of damage"<<std::endl;
}


void	DiamondTrap::guardGate()
{
	std::cout << "DiamondTrap " << this->_name << "mode Gate Keeper "<<std::endl;
}
