#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap Sa("Sa");


	Sa.attack("target");
	Sa.guardGate();


	return 0;
}
