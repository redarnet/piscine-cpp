#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal	*ani[10];
	int		i;

	for (i = 0; i < 5; i++)
		ani[i] = new Dog();
	for (i = 5; i < 10; i++)
		ani[i] = new Cat();
	i = 0;
	while (i != 10)
	{
		delete ani[i];
		i++;
	}
	return 0;
}
