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
				~Intern(void);
				Intern & operator=(Intern const & rhs);
				AForm *makeForm(std::string Robot, std::string Target);
};

#endif
