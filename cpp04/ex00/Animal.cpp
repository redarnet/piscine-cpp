
#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string _name)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

const std::string &Animal::getType() const
{
	//std::cout << "This is a " << this->_type << std::endl;
	return this->_type;
}

void	Animal::makeSound()
{
	std::cout << " " << std::endl;
}

Dog::Dog(void)
{
	this->_type = "Dog";
	return ;
}

Dog::Dog(std::string _name)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	return ;
}

const void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}


Cat::Cat(void)
{
	this->_type = "Cat";
	return ;
}

Cat::Cat(std::string _name)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

const void	Cat::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}

