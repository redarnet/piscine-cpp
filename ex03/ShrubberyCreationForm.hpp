#ifndef ShrubberyCreationForm_H
#define ShrubberyCreationForm_H

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
		public :
				ShrubberyCreationForm(void);
				ShrubberyCreationForm(const std::string _target);
				~ShrubberyCreationForm(void);
				ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
				const std::string &getType() const;
				int		getGrade(void) const;
				int		getGrade2(void) const;
				std::string getName(void) const;
				bool	getBo(void) const;
				void	beSigned(Bureaucrat &Maxime);

		private:
				std::string _name;
				int _echelon1;
				int	_echelon2;
				bool		_bo;
				std::string _target;

};

std::ostream & operator<<(std::ostream & o , ShrubberyCreationForm const &rhs);
#endif
