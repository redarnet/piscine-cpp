#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();


	const WrongAnimal* k = new WrongCat();

	std::cout << k->getType() << " " << std::endl;

	k->makeSound(); //will output the cat sound!
	// delete(meta);
	// delete(k);
	// delete(i);
	// delete(j);



return 0;
}
