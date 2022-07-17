#include "RobotomyRequestForm.hpp"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void	drill_noise(std::string target)
{
	int ale;

	std::cout << " CLAC ! KLAC !CLAC ! KLAC !"<<std::endl;
	srand(time(NULL));
	ale = (rand() %100) + 1;
	if (ale < 50)
		std::cout << target << " has been successfully robotized" << std::endl;
	else
		std::cout << "Faillure" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(void)
{
		std::cout << "Default constructor RobotomyRequestForm called" << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
		std::cout << "Copy constructor RobotomyRequestForm called" << std::endl;
		*this = src;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target) : _bo(0)
{
        std::cout << "constructor RobotomyRequestForm called" << std::endl;
		drill_noise(_target);
		this->_name = "Robot";
		this->_echelon1 = 72;
		this->_echelon2 = 45;
		return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
		std::cout << "Default Destructor RobotomyRequestForm called" << std::endl;
		return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_name = rhs._name;
		this->_bo = rhs._bo;
		this->_echelon1 = rhs._echelon1;
		this->_echelon2 = rhs._echelon2;
		return *this;
}



int		RobotomyRequestForm::getGrade() const
{
	return this->_echelon1;
}

int		RobotomyRequestForm::getGrade2() const
{
	return this->_echelon2;
}

std::string RobotomyRequestForm::getName() const
{
	return this->_name;
}


bool		RobotomyRequestForm::getBo() const
{
	return this->_bo;
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & rhs)
{
	o << "Echelon1 : ";
	o << rhs.getGrade();
	o << " Echelon2 : ";
	o << rhs.getGrade2();
	o << " Name : ";
	o << rhs.getName();
	o << " Bool : ";
	o << rhs.getBo();
	return o;
}


void	RobotomyRequestForm::beSigned(Bureaucrat &Maxime)
{
	if (Maxime.getGrade() <= this->_echelon1)
	{
		this->_bo = true;
	}



}

