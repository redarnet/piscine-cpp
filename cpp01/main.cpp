
#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie  *Charles =  newZombie("Charles");

	Charles->annouce();
	delete Charles;

	randomChump("Foo");

	return (0);

}
