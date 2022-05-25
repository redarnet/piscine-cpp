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

		private:
				std::string _name;
				int _echelon1;
				int	_echelon2;
				bool		_bo;

};

std::ostream & operator<<(std::ostream & o , Form const &rhs);
#endif
