#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	try
	{
		Form		Papier("Papier", 2, 3);
		Bureaucrat	Sam("Sam", 150);

		Papier.beSigned(Sam);
		std::cout << Sam.getName() << " bureaucrat grade "<< Sam.getGrade() << std::endl;
		std::cout << Papier << std::endl;
		Sam.SignForm(Papier);
	}
	catch(std::exception & e)
	{
		std::cout << "error" << std::endl;
	}

	std::cout << " - - - - - -" << std::endl;

	try
	{
		Form		Papier("Papier", 10, 3);
		Bureaucrat	Sam("Sam", 10);

		Sam.SignForm(Papier);
		Papier.beSigned(Sam);
		std::cout << Sam.getName() << " bureaucrat grade "<< Sam.getGrade() << std::endl;
		std::cout << Papier << std::endl;
		Sam.SignForm(Papier);
	}
	catch(std::exception & e)
	{
		std::cout << "error" << std::endl;
	}

	std::cout << " - - - - - -" << std::endl;

	Form	Papier("Papier", 10 , 3);
	Form	Peper("Perer", 5 , 1);
	Form	Cix(Peper);;

	Peper = Papier;

	std::cout << Papier << std::endl;
	std::cout << Peper << std::endl;
	std::cout << Cix << std::endl;


	return 0;
}
