
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

	{
	try
	{
		ShrubberyCreationForm Arbu("Arbre");
		Bureaucrat Maxime("Maxime", 1);

		std::cout << Arbu << std::endl;
		Arbu.beSigned(Maxime);
		std::cout << Arbu << std::endl;
		Arbu.execute(Maxime);
		Maxime.executeForm(Arbu);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	}

	std::cout << " - - - - - -" << std::endl;

	{
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
		std::cerr << e.what() << std::endl;
	}
	}

	std::cout << " - - - - - -" << std::endl;

	{
	try
	{
		PresidentialPardonForm Presi("Sorry");
		Bureaucrat Maxime("Maxime", 24);

		std::cout << Presi << std::endl;
		Presi.beSigned(Maxime);
		std::cout << Presi << std::endl;
		Presi.execute(Maxime);
		Maxime.executeForm(Presi);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	}

/*
	//  Copy constructeur et copy assigment opertor
	std::cout << " - - - - - -" << std::endl;
	{
	try
	{
		PresidentialPardonForm Pres("Sorry");
		PresidentialPardonForm Cpy(Pres);
		Bureaucrat Max("Max", 4);

		std::cout << Cpy << std::endl;
		Pres.beSigned(Max);
		std::cout << Cpy << std::endl;
		Pres.execute(Max);
		Max.executeForm(Cpy);
	}
	catch(std::exception & e)
	{
		std::cout << "error" << std::endl;
	}
	}
	std::cout << " - - - - - -" << std::endl;
	{
	try
	{
		PresidentialPardonForm Pres("Sorry");
		PresidentialPardonForm Cpy;
		Bureaucrat Max("Max", 4);

		Cpy = Pres;
		std::cout << Cpy << std::endl;
		Pres.beSigned(Max);
		std::cout << Cpy << std::endl;
		Pres.execute(Max);
		Max.executeForm(Cpy);
	}
	catch(std::exception & e)
	{
		std::cout << "error" << std::endl;
	}
	}
	*/


	return 0;
}
