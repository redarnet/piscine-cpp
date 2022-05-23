#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{

const Dog* j = new Dog();
const Cat* i = new Cat();
//const AAnimal *x = new AAnimal();
const AAnimal *x = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
	return 0;
}
