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


	// try
	// {
	// 	Form		Papier("Papier", 10, 3);
	// 	Bureaucrat	Sam("Sam", 10);

	// 	std::cout << Sam.getName() << " bureaucrat grade "<< Sam.getGrade() << std::endl;
	// 	std::cout << Papier << std::endl;
	// 	Papier.beSigned(Sam);
	// 	Sam.SignForm(Papier);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cout << "error" << std::endl;
	// }

	return 0;
}
