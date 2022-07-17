#include "Form.hpp"

Form::Form(void)
{
		std::cout << "Default constructor Form called" << std::endl;
		return ;
}

Form::Form(const std::string _name, const int _echelon1, const int _echelon2) : _bo(0)
{
        std::cout << "constructor Form called" << std::endl;
		this->_name = _name;
		this->_echelon1 = _echelon1;
		this->_echelon2 = _echelon2;
		GradeToHightException();
		GradeToLowException();
		return ;
}

Form::Form(Form const & src)
{
	std::cout << "copy constructor Form called" << std::endl;
	*this = src;
	return ;
}
Form::~Form(void)
{
		std::cout << "Default Destructor Form called" << std::endl;
		return ;
}

Form & Form::operator=(Form const & rhs)
{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_name = rhs._name;
		this->_bo = rhs._bo;
		this->_echelon1 = rhs._echelon1;
		this->_echelon2 = rhs._echelon2;
		return *this;
}



int		Form::getGrade() const
{
	return this->_echelon1;
}

int		Form::getGrade2() const
{
	return this->_echelon2;
}

std::string Form::getName() const
{
	return this->_name;
}


bool		Form::getBo() const
{
	return this->_bo;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
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

void	Form::GradeToHightException()
{
	if ( this->_echelon1 < 1 || this->_echelon2 < 1)
	{
		throw std::exception();
	}
	else
	{

	}
}

void	Form::GradeToLowException()
{
	if ( this->_echelon1 > 150 || this->_echelon2 > 150)
		throw std::exception();
	else
	{
	}
}


void	Form::beSigned(Bureaucrat &Maxime)
{
	if (Maxime.getGrade() <= this->_echelon1)
	{
		this->_bo = true;
	}
	else
		throw std::exception();
}

