#ifndef PresidentialPardonForm_H
#define PresidentialPardonForm_H

#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
		public:
				PresidentialPardonForm(void);
				PresidentialPardonForm(const std::string _target);
				PresidentialPardonForm(PresidentialPardonForm const & src);
				~PresidentialPardonForm(void);
				PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
				const std::string &getType() const;
				int		getGrade(void) const;
				int		getGrade2(void) const;
				std::string getName(void) const;
				bool	getBo(void) const;
				void	GradeToHightException();
				void	GradeToLowException();
				void	beSigned(Bureaucrat &Maxime);

		private:
				std::string _name;
				int _echelon1;
				int	_echelon2;
				bool		_bo;

};

std::ostream & operator<<(std::ostream & o , PresidentialPardonForm const &rhs);
#endif
