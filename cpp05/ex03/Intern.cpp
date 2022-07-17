#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern(void)
{
		std::cout << "Default constructor Form called" << std::endl;
		return ;
}

Intern::Intern(Intern const & rhs)
{
		std::cout << "Copy constructor Form called" << std::endl;
		*this = rhs;
		return ;
}


Intern::~Intern(void)
{
		std::cout << "Default Destructor Form called" << std::endl;
		return ;
}

Intern & Intern::operator=(Intern const & )
{
		std::cout << "Copy assignment operator called" << std::endl;

		return *this;
}

AForm	*Intern::robot(std::string Target)
{
	return (new RobotomyRequestForm(Target));
}

AForm	*Intern::presi(std::string Target)
{
	return (new PresidentialPardonForm(Target));

}

AForm	*Intern::shrubbery(std::string Target)
{
	return ( new ShrubberyCreationForm(Target));
}

AForm	*Intern::makeForm(std::string PO, std::string Target)
{
	int i = 0;
	AForm * res;

	monform[0] = &Intern::robot;
	monform[1] = &Intern::presi;
	monform[2] = &Intern::shrubbery;

	_tab[0] = "robotomy request";
	_tab[1] = "presidential pardon";
	_tab[2] = "shrubbery creation";
	while (i != 3)
	{
		if (PO == _tab[i])
			break;
		i++;
	}
	if (i >= 3)
		return NULL;
	res = (this->*(monform[i]))(Target);
	std::cout << Target << std::endl;
	// Robot->changeName(PO);
	return res;
}
