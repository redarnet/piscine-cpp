
#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string _name)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

const std::string &WrongAnimal::getType() const
{
	//std::cout << "This is a " << this->_type << std::endl;
	return this->_type;
}

const void	WrongAnimal::makeSound() const
{
	std::cout << " " << std::endl;
}

WrongDog::WrongDog(void)
{
	this->_type = "WrongDog";
	return ;
}

WrongDog::WrongDog(std::string _name)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

WrongDog::~WrongDog(void)
{
	return ;
}

const void	WrongDog::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}


WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(std::string _name)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

const void	WrongCat::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}

