#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	DiamondTrap Sa("Sa");


	Sa.attack("target");
	Sa.highFiveGuys();

	return 0;
}
