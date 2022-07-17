#include "Form.hpp"

AForm::AForm(void)
{
		std::cout << "Default constructor Form called" << std::endl;
		return ;
}

AForm::AForm(const std::string _name, const int _echelon1, const int _echelon2) : _bo(0)
{
        std::cout << "Copy constructor Form called" << std::endl;
		this->_name = _name;
		this->_echelon1 = _echelon1;
		this->_echelon2 = _echelon2;
		GradeToHightException();
		GradeToLowException();
		return ;
}

AForm::AForm(AForm const & src)
{
	std::cout << "copy constructor AForm called" << std::endl;
	*this = src;
	return ;
}
AForm::~AForm(void)
{
		std::cout << "Default Destructor Form called" << std::endl;
		return ;
}

AForm & AForm::operator=(AForm const & rhs)
{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_name = rhs._name;
		this->_bo = rhs._bo;
		this->_echelon1 = rhs._echelon1;
		this->_echelon2 = rhs._echelon2;
		return *this;
}



int		AForm::getGrade() const
{
	return this->_echelon1;
}

int		AForm::getGrade2() const
{
	return this->_echelon2;
}

std::string AForm::getName() const
{
	return this->_name;
}


bool		AForm::getBo() const
{
	return this->_bo;
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
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

void	AForm::GradeToHightException()
{
	if ( this->_echelon1 < 1 || this->_echelon2 < 1)
	{
		throw std::exception();
	}
	else
	{

	}
}

void	AForm::GradeToLowException()
{
	if ( this->_echelon1 > 150 || this->_echelon2 > 150)
		throw std::exception();
	else
	{
	}
}


void	AForm::beSigned(Bureaucrat &Maxime)
{
	if (Maxime.getGrade() <= this->_echelon1)
	{
		this->_bo = true;
	}
	else
		throw std::exception();

}


void	AForm::execute(Bureaucrat const &executor)
{
	if (getBo() == 1 && executor.getGrade() <=  getGrade2())
	std::cout << executor.getName() << " can execute " << getName() << std::endl;
	else
		throw std::exception();
}

