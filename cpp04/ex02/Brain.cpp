
#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain Default constructor Brain called" << std::endl;
	return ;
}

Brain::Brain(std:: string name)
{
	std::cout << "Brain Copy constructor Brain called" << std::endl;
	_name = name;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Default Destructor Brain called" << std::endl;
	return ;
}

int		Brain::getValue(void) const
{
	return this->_n;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

const std::string &Brain::getType() const
{
	//std::cout << "This is a " << this->_type << std::endl;
	return this->_type;
}

