#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"

void	brain(int N)
{
	const Animal	*ani[N];
	int		i;

	for (i = 0; i < N/2; i++)
		ani[i] = new Dog();
	for (i = N/2; i < N; i++)
		ani[i] = new Cat();
	 i = 0;
	 while (i != N)
	 {
	 	delete ani[i];
	 	i++;
	 }

}

int main()
{
	brain(19);
	return 0;
}
