#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
		std::cout << "Default constructor Bureaucrat called" << std::endl;
		return ;
}

Bureaucrat::Bureaucrat(std::string _name, int _echelon)
{
        std::cout << "constructor Bureaucrat called" << std::endl;
		this->_name = _name;
		this->_echelon = _echelon;
		GradeToHightException();
		GradeToLowException();
		return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const  & src)
{
        std::cout << "copy constructor Bureaucrat called" << std::endl;
		*this = src;
        return ;
}

Bureaucrat::~Bureaucrat(void)
{
		std::cout << "Default Destructor Bureaucrat called" << std::endl;
		return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_echelon =  rhs._echelon;
		this->_name = rhs._name;
		return *this;
}


void		Bureaucrat::incre_eche()
{
	this->_echelon--;
	if (this->_echelon < 1)
		throw std::exception();
}


void		Bureaucrat::decre_eche()
{
	this->_echelon++;
	if (this->_echelon > 150)
		throw std::exception();
}

int		Bureaucrat::getGrade() const
{
	return this->_echelon;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getGrade();
	return o;
}

void	Bureaucrat::GradeToHightException()
{
	if ( this->_echelon < 1)
	{
		throw std::exception();
	}
	else
	{

	}
}

void	Bureaucrat::GradeToLowException()
{
	if ( this->_echelon > 150)
		throw std::exception();
	else
	{
	}
}

void	Bureaucrat::SignForm(AForm &Papier)
{
	if (Papier.getBo() == true)
		std::cout << this->_name << "signed" << Papier << std::endl;
	else
		std::cout << this->_name << "didn't signed" << Papier << std::endl;

}

void	Bureaucrat::executeForm(AForm const & form)
{
	if (getGrade() <= form.getGrade2())
		std::cout << getName() << " execute " << form.getName() << std::endl;
	else
		std::cout << getName() << " can't execute " << form.getName() << std::endl;
}




