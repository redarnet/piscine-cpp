#ifndef ScavTrap_H
# define ScavTrap_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap(void);
		ScavTrap(std::string _name);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amout);
		void	beRepaired(unsigned int amout);
		int		getValue(void) const;
		void guardGate();

};


#endif
