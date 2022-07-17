#include "ShrubberyCreationForm.hpp"
#include <string>
#include <fstream>
#include <cstring>
#include <cstring>
#include <string.h>

void	creat_file(std::string file)
{
	const char *file1;
	std::string name;


	name.append(file);
	name.append("_shrubbery");

	file1 = const_cast<char *>(name.c_str());
	std::ofstream ofs(file1);


	ofs << "abres ASCII" << std::endl;
	ofs.close();

}

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
		std::cout << "Default constructor ShrubberyCreationForm called" << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target) : _bo(0)
{
        std::cout << "constructor ShrubberyCreationForm called" << std::endl;
		this->_name = "Arbu";
		this->_echelon1 = 145;
		this->_echelon2 = 137;
		creat_file(_target);
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src)
{
		std::cout << "Copy constructor ShrubberyCreationForm called" << std::endl;
		*this = src;
		return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
		std::cout << "Default Destructor ShrubberyCreationForm called" << std::endl;
		return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_name = rhs._name;
		this->_bo = rhs._bo;
		this->_echelon1 = rhs._echelon1;
		this->_echelon2 = rhs._echelon2;
		return *this;
}



int		ShrubberyCreationForm::getGrade() const
{
	return this->_echelon1;
}

int		ShrubberyCreationForm::getGrade2() const
{
	return this->_echelon2;
}

std::string ShrubberyCreationForm::getName() const
{
	return this->_name;
}


bool		ShrubberyCreationForm::getBo() const
{
	return this->_bo;
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
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

void	ShrubberyCreationForm::beSigned(Bureaucrat &Maxime)
{
	if (Maxime.getGrade() <= this->_echelon1)
	{
		this->_bo = true;
	}
	else
		throw std::exception();



}

