
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string _name)
{
	this->_name = _name;
	this->_attack = 100;
	this->_energy = 100;
	this->_hit = 30;
	std::cout << "FragTrap Copy constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

int		FragTrap::getValue(void) const
{
	return this->_n;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energy > 1)
	{
		this->_energy--;
		std::cout << "FragTrap " << this->_name << " attacks "  << target << " causing " << this->_attack
			<< " points of damage "<< std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << "has no energy" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_hit = this->_hit - amount;
	std::cout << "FragTrap " << this->_name << " take " << amount << " points of damage"<<std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hit = this->_hit + amount;
	std::cout << "FragTrap " << this->_name << " heal " << amount << " points of damage"<<std::endl;
}


void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->_name << "mode Gate Keeper "<<std::endl;
}
