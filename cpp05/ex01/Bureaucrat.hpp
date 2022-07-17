#ifndef Bureaucrat_H
# define Bureaucrat_H

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

        public:
                Bureaucrat(void);
                Bureaucrat(std::string _name, int _echelon);
				Bureaucrat(Bureaucrat const & src);
                ~Bureaucrat(void);
                Bureaucrat & operator=(Bureaucrat const & rhs);
                const std::string       &getType() const;
				void	incre_eche(void);
				void	decre_eche(void);
				int		getGrade(void) const;
				std::string getName(void) const;
				void	GradeToHightException();
				void	GradeToLowException();
				void	SignForm(Form & Papier);

        private:
                std::string _name;
				int _echelon;

};

std::ostream & operator<<(std::ostream & o , Bureaucrat const &rhs);
#endif
