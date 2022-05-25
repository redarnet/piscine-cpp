#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Theo("Theo", -2);
	Bureaucrat Maxime("Maxime", 20);
	Bureaucrat Jean("Jean", 222);

	std::cout << Theo.getName() << " bureaucrat grade "<< Theo.getGrade() << std::endl;
	std::cout << Maxime.getName() << " bureaucrat grade "<< Maxime.getGrade() << std::endl;
	std::cout << Jean.getName() << " bureaucrat grade "<< Jean.getGrade() <<  std::endl;
}
