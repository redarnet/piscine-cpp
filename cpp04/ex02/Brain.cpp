
#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain Default constructor Brain called" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy constructor Brain called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Default Destructor Brain called" << std::endl;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

const std::string &Brain::getType() const
{
	//std::cout << "This is a " << this->_type << std::endl;
	return this->_type;
}

