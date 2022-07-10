#ifndef FragTrap_H
# define FragTrap_H

#include <iostream>
#include "ClapTrap.hpp"

 class FragTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string _name);
		virtual ~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amout);
		void	beRepaired(unsigned int amout);
		int		getValue(void) const;
		void highFiveGuys(void);

};


#endif
