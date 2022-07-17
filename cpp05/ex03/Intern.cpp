#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

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

AForm	*Intern::robot()
{
	AForm *robot = new RobotomyRequestForm;

	return robot;
}

AForm	*Intern::presi()
{
	AForm *presi = new PresidentialPardonForm;

	return presi;
}

AForm	*Intern::shrubbery()
{
	AForm *shrubbery = new ShrubberyCreationForm;

	return shrubbery;
}

AForm	*Intern::makeForm(std::string PO, std::string Target)
{
	int i = 0;
	AForm * res;

	monform[0] = &Intern::robot;
	monform[1] = &Intern::presi;
	monform[2] = &Intern::shrubbery;

	res = (this->*monform[i]());
	_tab[0] = "robotomy request";
	_tab[1] = "presidential pardon";
	_tab[2] = "shrubbery creation";
	while (i != 3)
	{
		if (PO == _tab[i])
			break;
		i++;
	}
	std::cout << Target << std::endl;
	// Robot->changeName(PO);
	return res;
}
