#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "Form.hpp"
#include <iostream>

class AForm;

class Bureaucrat
{

		public:
				Bureaucrat(void);
				Bureaucrat(std::string _name, int _echelon);
				Bureaucrat(Bureaucrat const & src);
				~Bureaucrat(void);
				Bureaucrat & operator=(Bureaucrat const & rhs);
				const std::string &getType() const;
				void	incre_eche(void);
				void	decre_eche(void);
				int		getGrade(void) const;
				std::string getName(void) const;
				void	GradeToHightException();
				void	GradeToLowException();
				void	SignForm(AForm &Papier);
				void	executeForm(AForm const & form);

		private:
				std::string _name;
				int _echelon;

};

std::ostream & operator<<(std::ostream & o , Bureaucrat const &rhs);
#endif
