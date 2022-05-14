#ifndef HUMANB_H
# define HUMANB_H


# include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack();
		void setWeapon(Weapon &_weapon);
};


#endif
