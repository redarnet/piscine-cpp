
#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Default constructor Brain called" << std::endl;
	return ;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Copy constructor Brain called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Default Destructor Brain called" << std::endl;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

const std::string &Brain::getType() const
{
	//std::cout << "This is a " << this->_type << std::endl;
	return this->_type;
}

