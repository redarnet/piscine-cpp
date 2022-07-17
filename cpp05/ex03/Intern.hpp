#ifndef Intern_H
#define Intern_H

#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

class Form;

class Intern
{
		public:
				Intern(void);
				Intern(Intern const & rhs);
				~Intern(void);
				Intern & operator=(Intern const & r);
				AForm *makeForm(std::string Robot, std::string Target);
				AForm *presi();
				AForm *robot();
				AForm *shrubbery();
		private :
			std::string _tab [3];
		AForm *(Intern::*monform[3])(void);
};

#endif
