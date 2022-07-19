#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{
		std::cout << "Default constructor Form called" << std::endl;
		return ;
}


Intern::~Intern(void)
{
		std::cout << "Default Destructor Form called" << std::endl;
		return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
		std::cout << "Copy assignment operator called" << std::endl;
		return *this;
}

AForm	*Intern::makeForm(std::string PO, std::string Target)
{
	AForm *Robot= new RobotomyRequestForm(Target);



	Robot->changeName(PO);
	std::cout << "Intern creates " << *Robot << std::endl;

	return Robot;
}
