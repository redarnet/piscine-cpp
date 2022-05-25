#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
		std::cout << "Default constructor PresidentialPardonForm called" << std::endl;
		return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : _bo(0)
{
        std::cout << "Copy constructor PresidentialPardonForm called" << std::endl;
		std::cout << _target << " has been forgiven by Zaphod Beeblerox" << std::endl;
		this->_name = "Presi";
		this->_echelon1 = 25;
		this->_echelon2 = 5;
			GradeToHightException();
			GradeToLowException();
		return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
		std::cout << "Default Destructor PresidentialPardonForm called" << std::endl;
		return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
		std::cout << "Copy assignment operator called" << std::endl;
		return *this;
}



int		PresidentialPardonForm::getGrade() const
{
	return this->_echelon1;
}

int		PresidentialPardonForm::getGrade2() const
{
	return this->_echelon2;
}

std::string PresidentialPardonForm::getName() const
{
	return this->_name;
}


bool		PresidentialPardonForm::getBo() const
{
	return this->_bo;
}

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & rhs)
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

void	PresidentialPardonForm::GradeToHightException()
{
	if ( this->_echelon1 < 1 || this->_echelon2 < 1)
	{
		throw std::exception();
	}
	else
	{

	}
}

void	PresidentialPardonForm::GradeToLowException()
{
	if ( this->_echelon1 > 150 || this->_echelon2 > 150)
		throw std::exception();
	else
	{
	}
}


void	PresidentialPardonForm::beSigned(Bureaucrat &Maxime)
{
	if (Maxime.getGrade() <= this->_echelon1)
	{
		this->_bo = true;
	}



}

