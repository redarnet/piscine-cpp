#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap Sa("Sa");


	Sa.attack("target");
	Sa.takeDamage(4);
	Sa.beRepaired(3);
	Sa.guardGate();


	return 0;
}
