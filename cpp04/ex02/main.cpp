#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"

void	brain(int N)
{
	const AAnimal	*ani[N];
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
	brain(4);
	return 0;
}

// int main()
// {
// 	const AAnimal* j = new Dog();
// 	const AAnimal* i = new Cat();
// 	std::cout << "Type = " << j->getType()  << std::endl;
// 	std::cout << "Sound = " ;
// 	 j->makeSound();
// 	std::cout << "Type = " << i->getType()  << std::endl;
// 	std::cout << "Sound = ";
// 	i->makeSound();


// 	const WrongAnimal* k = new WrongCat();
// 	const WrongAnimal* p = new WrongDog();
// 	const WrongAnimal *l = new WrongAnimal();

// 	std::cout << "Type = " << k->getType()  << std::endl;
// 	std::cout << "Sound = ";
// 	k->makeSound();
// 	std::cout << "Type = " << p->getType()  << std::endl;
//  	std::cout << "Sound = ";
// 	p->makeSound();
// 	std::cout << "Type = " << l->getType()  << std::endl;
// 	std::cout << "Sound = ";
// 	l->makeSound();

// 	delete j;
// 	delete i;
// 	delete k;
// 	delete p;
// 	delete l;

//  return 0;
// }
