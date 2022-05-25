
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	/*
	try
	{
		ShrubberyCreationForm Arbu("Abre");
		Bureaucrat Maxime("Maxime", 140);

		std::cout << Arbu << std::endl;
		Arbu.beSigned(Maxime);
		std::cout << Arbu << std::endl;
		Arbu.execute(Maxime);
		Maxime.executeForm(Arbu);
	}
	catch(std::exception & e)
	{
		std::cout << "error" << std::endl;
	}
	*/
	/*
	try
	{
		RobotomyRequestForm Robot("Rd23");
		Bureaucrat Maxime("Maxime", 20);

		std::cout << Robot << std::endl;
		Robot.beSigned(Maxime);
		std::cout << Robot << std::endl;
		Robot.execute(Maxime);
		Maxime.executeForm(Robot);
	}
	catch(std::exception & e)
	{
		std::cout << "error" << std::endl;
	}
	*/
	try
	{
		PresidentialPardonForm Presi("Sorry");
		Bureaucrat Maxime("Maxime", 20);

		std::cout << Presi << std::endl;
		Presi.beSigned(Maxime);
		std::cout << Presi << std::endl;
		Presi.execute(Maxime);
		Maxime.executeForm(Presi);
	}
	catch(std::exception & e)
	{
		std::cout << "error" << std::endl;
	}




	return 0;
}
