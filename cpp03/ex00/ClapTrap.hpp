#ifndef ClapTrap_H
# define ClapTrap_H

#include <iostream>

class ClapTrap
{

	public:
		ClapTrap(void);
		ClapTrap(std::string _name);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & rhs);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amout);
		void	beRepaired(unsigned int amout);
		int		getValue(void) const;

	private :
		std::string _name;
		int	_hit;
		int	_energy;
		int	_attack;
		int _n;



};


#endif
