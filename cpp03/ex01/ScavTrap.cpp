
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->_name = _name;
	this->_attack = 100;
	this->_energy = 50;
	this->_hit = 100;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

int		ScavTrap::getValue(void) const
{
	return this->_n;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy > 1 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attacks "  << target << " causing " << this->_attack
			<< " points of damage "<< std::endl;
	}
	else if (this->_energy <= 0)
		std::cout << "ScavTrap " << this->_name << "has no energy" << std::endl;
	else
		std::cout << "ScravTrap " << this->_name << "has no point left" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->_hit = this->_hit - amount;
	std::cout << "ScavTrap " << this->_name << " take " << amount << " points of damage"<<std::endl;
	std::cout << "ScavTrap has " << this->_hit << " hit point left" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0 )
	{
		this->_hit = this->_hit + amount;
		std::cout << "ScavTrap " << this->_name << " heal " << amount << " points of damage"<<std::endl;
		std::cout << "ScavTrap has " << this->_hit << " hit point left" << std::endl;
	}
	else if (this->_energy <= 0)
		std::cout << "ScavTrap " << this->_name << "has no energy" << std::endl;
	else
		std::cout << "ScravTrap " << this->_name << "has no point left" << std::endl;
}


void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << "mode Gate Keeper "<<std::endl;
}
