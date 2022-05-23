#ifndef FragTrap_H
# define FragTrap_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string _name);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amout);
		void	beRepaired(unsigned int amout);
		int		getValue(void) const;
		void highFiveGuys(void);

};


#endif
