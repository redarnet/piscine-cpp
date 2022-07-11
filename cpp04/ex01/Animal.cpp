#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->_type = "Animal";
	return ;
}

Animal::Animal(std::string name)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	_name = name;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal  Destructor called" << std::endl;
	return ;
}

int		Animal::getValue(void) const
{
	return this->_n;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

const std::string &Animal::getType() const
{
	//std::cout << "This is a " << this->_type << std::endl;
	return this->_type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}

Dog::Dog(void)
{
	this->_type = "Dog";
	this->brain = new Brain();
	std::cout <<"Dog constuctor called" << std::endl;
	return ;
}

Dog::Dog(std::string name)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->brain = new Brain();
	this->_type = "Dog";
	_name = name;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
	return ;
}

 void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}


Cat::Cat(void)
{
	this->_type = "Cat";
	this->brain = new Brain();
	std::cout <<  "Cat constuctor called" << std::endl;
	return ;
}

Cat::Cat(std::string name)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
	_name = name;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete brain;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}
