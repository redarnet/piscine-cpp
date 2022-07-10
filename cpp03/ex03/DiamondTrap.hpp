#ifndef DiamondTrap_H
# define DiamondTrap_H

#include <iostream>
#include "ClapTrap.hpp"

class DiamondTrap : public ClapTrap
{

	public:
		DiamondTrap(void);
		DiamondTrap(std::string _name);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amout);
		void	beRepaired(unsigned int amout);
		int		getValue(void) const;
		void guardGate();

};


#endif
