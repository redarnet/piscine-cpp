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
	delete j;
	delete i;
	delete meta;
	delete k;


return 0;
}


// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << "Type = " << j->getType()  << std::endl;
// 	std::cout << "Sound = " ;
// 	 j->makeSound();
// 	std::cout << "Type = " << i->getType()  << std::endl;
// 	std::cout << "Sound = ";
// 	i->makeSound();
// 	std::cout << "Type = " << meta->getType()  << std::endl;
// 	std::cout << "Sound = " ;
// 	meta->makeSound();

// 	j->makeSound();
// 	meta->makeSound();


// 	const WrongAnimal* k = new WrongCat();
// 	const WrongAnimal* p = new WrongDog();
// 	const WrongAnimal *l = new WrongAnimal();

// 	std::cout << "Type = " << k->getType()  << std::endl;
// 	std::cout << "Sound = ";
// 	k->makeSound();
// 	std::cout << "Type = " << p->getType()  << std::endl;
// 	std::cout << "Sound = ";
// 	p->makeSound();
// 	std::cout << "Type = " << l->getType()  << std::endl;
// 	std::cout << "Sound = ";
// 	l->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;
// 	delete k;
// 	delete p;
// 	delete l;

// return 0;
// }
