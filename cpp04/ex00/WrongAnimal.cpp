
#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Wrong Animal Default constructor called" << std::endl;
	this->_type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "Wrong Animal Copy constructor called" << std::endl;
	this->_type = "WrongAnimal";
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Wrong Animal Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

const std::string &WrongAnimal::getType() const
{
	//std::cout << "This is a " << this->_type << std::endl;
	return this->_type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal Sound" << std::endl;
}

WrongDog::WrongDog(void)
{
	this->_type = "WrongDog";
	std::cout << "WrongDog constructor called" << std::endl;
	return ;
}

WrongDog::WrongDog(const WrongDog & src)
{
	std::cout << "WrongDog Copy constructor called" << std::endl;
	this->_type = "WrongDog";
	*this = src;
	return ;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog Destructor called" << std::endl;
	return ;
}

WrongDog & WrongDog::operator=(WrongDog const & rhs)
{
	std::cout << "Wrong Dog Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void	WrongDog::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}


WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat & src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->_type = "WrongCat";
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Wrong Dog Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}

