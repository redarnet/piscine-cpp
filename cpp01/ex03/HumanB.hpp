#ifndef HUMANB_H
# define HUMANB_H


# include <string>
#include <iostream>

class HumanB
{
	private :
		std::string _weapon;
		std::string _name;
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void attack();

};


#endif
