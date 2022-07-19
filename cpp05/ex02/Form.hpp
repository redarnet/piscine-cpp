#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
		public:
				AForm(void);
				AForm(const std::string _name, const int _echelon1, const int _echelon2);
				AForm(AForm const & src);
				virtual ~AForm(void);
				AForm & operator=(AForm const & rhs);
				const std::string &getType() const;
				virtual int		getGrade(void) const;
				virtual int		getGrade2(void) const;
				virtual std::string getName(void) const;
				virtual bool	getBo(void) const;
				virtual void	beSigned(Bureaucrat &Maxime);
				void execute(Bureaucrat const & executor);

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
	class Cantexecute : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Exception : wrong grade\n";
		}
	};
		private:
				std::string _name;
				int _echelon1;
				int	_echelon2;
				bool		_bo;

};

std::ostream & operator<<(std::ostream & o , AForm const &rhs);
#endif
