#ifndef RobotomyRequestForm_H
#define RobotomyRequestForm_H

#include "Bureaucrat.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm
{
		public:
				RobotomyRequestForm(void);
				RobotomyRequestForm(const std::string _target);
				RobotomyRequestForm(RobotomyRequestForm const & src);
				~RobotomyRequestForm(void);
				RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
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

};

std::ostream & operator<<(std::ostream & o , RobotomyRequestForm const &rhs);
#endif
