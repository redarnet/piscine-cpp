
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
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
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks "  << target << " causing " << this->_attack
			<< " points of damage "<< std::endl;
	//	std::cout << "ClapTrap " << this->_name << " has " << this->_energy << " energy " << std::endl;
	}
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " has no point left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit = this->_hit - amount;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage"<<std::endl;
	std::cout << "ClapTrap has " << this->_hit << " hit point left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		this->_hit = this->_hit + amount;
		std::cout << "ClapTrap " << this->_name << " heal " << amount << " points of damage"<<std::endl;
		std::cout << "ClapTrap has " << this->_hit << " hit point left" << std::endl;
	}
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " has no point left" << std::endl;
}


