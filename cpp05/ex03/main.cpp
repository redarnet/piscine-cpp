
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	std::cout << " - - - - - -" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << *rrf << std::endl;
	}
	std::cout << " - - - - - -" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat Maxime("Maxime", 20);

		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->beSigned(Maxime);
		std::cout << *rrf << std::endl;
		rrf->execute(Maxime);
	}
	std::cout << " - - - - - -" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat Maxime("Maxime", 20);

		rrf = someRandomIntern.makeForm("robotomy reques", "Bender");
	}
	return 0;
}
