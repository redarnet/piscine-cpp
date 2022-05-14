#ifndef WEAPON_H
# define WEAPON_H


# include <string>
#include <iostream>

class Weapon
{
	private :
		std::string _type;
	public:
		Weapon(std::string const & type);
		~Weapon(void);
		std::string const  &getType();
		std::string const  &setType(std::string str);

};


#endif
