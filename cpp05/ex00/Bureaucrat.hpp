#ifndef Bureaucrat_H
# define Bureaucrat_H

#include <iostream>

class Bureaucrat
{

        public:
                Bureaucrat(void);
                Bureaucrat(std::string _name, int _echelon);
                ~Bureaucrat(void);
                Bureaucrat & operator=(Bureaucrat const & rhs);
                const std::string       &getType() const;
				void	incre_eche(void);
				void	decre_eche(void);
				int		getGrade(void) const;
				std::string getName(void) const;
				void	GradeToHightException();
				void	GradeToLowException();

        private:
                std::string _name;
				int _echelon;

};

std::ostream & operator<<(std::ostream & o , Bureaucrat const &rhs);
#endif
