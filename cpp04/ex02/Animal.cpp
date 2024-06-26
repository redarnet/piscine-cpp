
#include "Animal.hpp"
#include <iostream>


AAnimal::~AAnimal(void)
{
	std::cout << "Destructor AAnimal called" << std::endl;
	return ;
}

const std::string &AAnimal::getType() const
{
	//std::cout << "This is a " << this->_type << std::endl;
	return this->_type;
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal SOund " << std::endl;
}

Dog::Dog(void)
{
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
	*this = src;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Destructor Dog called" << std::endl;
	return ;
}

void	Dog::makeSound() const
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

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
	*this = src;
	return ;
}
Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Destructor Cat called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}

