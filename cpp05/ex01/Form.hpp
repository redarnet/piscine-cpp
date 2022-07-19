#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
		public:
				Form(void);
				Form(const std::string _name, const int _echelon1, const int _echelon2);
				Form(Form const & src);
				~Form(void);
				Form & operator=(Form const & rhs);
				const std::string &getType() const;
				int		getGrade(void) const;
				int		getGrade2(void) const;
				std::string getName(void) const;
				bool	getBo(void) const;
				void	GradeToHightException();
				void	GradeToLowException();
				virtual void	beSigned(Bureaucrat &Maxime);

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Exception : grade is too High\n";
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Exception : grade is too Low\n";
		}
	};
		private:
				std::string _name;
				int _echelon1;
				int	_echelon2;
				bool		_bo;

};

std::ostream & operator<<(std::ostream & o , Form const &rhs);
#endif
