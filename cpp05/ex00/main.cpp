#include <iostream>
#include "Bureaucrat.hpp"

int main()
{

	{
		try
		{
			Bureaucrat Theo("Theo", -2);
			Bureaucrat Jean("Jean", 222);

			std::cout << Theo.getName() << " bureaucrat grade "<< Theo.getGrade() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error" << std::endl;
		}
	}
	std::cout << " - - - - - -" << std::endl;
	{
		try
		{
			Bureaucrat Maxime("Maxime", 20);

			std::cout << Maxime.getName() << " bureaucrat grade "<< Maxime.getGrade() << std::endl;
			 Maxime.incre_eche();
			std::cout << Maxime.getName() << " bureaucrat grade "<< Maxime.getGrade() << std::endl;
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			 Maxime.incre_eche();
			std::cout << Maxime.getName() << " bureaucrat grade "<< Maxime.getGrade() << std::endl;
			 Maxime.incre_eche();
			std::cout << Maxime.getName() << " bureaucrat grade "<< Maxime.getGrade() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error" << std::endl;
		}
	}

	std::cout << " - - - - - -" << std::endl;

	{
		try
		{
			Bureaucrat Jean("Jean", 222);

			std::cout << Jean.getName() << " bureaucrat grade "<< Jean.getGrade() <<  std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error" << std::endl;
		}
	}

		std::cout << " - - - - - -" << std::endl;
	{

		try
		{
			Bureaucrat Theo("Theo", 6);
			Bureaucrat Jean("Jean", 9);
			Bureaucrat Maxime(Jean);

			Jean = Theo;
			std::cout << Theo.getName() << " bureaucrat grade "<< Theo.getGrade() << std::endl;
			std::cout << Jean.getName() << " bureaucrat grade "<< Jean.getGrade() << std::endl;
			std::cout << Maxime.getName() << " bureaucrat grade "<< Maxime.getGrade() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error" << std::endl;
		}
	}


	return 0;
}
