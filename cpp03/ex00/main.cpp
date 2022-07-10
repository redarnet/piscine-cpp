#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap Sam("Sam");


	Sam.attack("target");
	Sam.takeDamage(2);
	Sam.beRepaired(2);

	return 0;
}
