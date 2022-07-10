#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	FragTrap Sa("Sa");


	Sa.attack("target");
	Sa.takeDamage(6);
	Sa.beRepaired(6);
	Sa.highFiveGuys();


	return 0;
}
