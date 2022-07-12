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

// int main()
// {
// 	ClapTrap Sam("Sam");
// 	ClapTrap Merry("Merry");
// 	ClapTrap Pippin("Pippin");

// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
// 	Sam.attack("target");
//  	Sam.beRepaired(2);

// 	std::cout << "- - - - - - - - -" << std::endl;

// 	Merry.takeDamage(10);
// 	Merry.attack("cible");
// 	Merry.beRepaired(8);

// 	std::cout << "- - - - - - - - -" << std::endl;

// 	Pippin.takeDamage(8);
// 	Pippin.attack("target");
// 	Pippin.beRepaired(8);
// 	return 0;
// }
