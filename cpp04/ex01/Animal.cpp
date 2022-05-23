
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
	std::cout << "Destructor Animal called" << std::endl;
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

const void	Animal::makeSound() const
{
	std::cout << " " << std::endl;
}

Dog::Dog(void)
{
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(std::string _name)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Destructor Dog called" << std::endl;
	return ;
}

const void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}


Cat::Cat(void)
{
	std::cout << "Constructor Cat called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(std::string _name)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Destructor Cat called" << std::endl;
	return ;
}

const void	Cat::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}

