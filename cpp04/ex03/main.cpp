#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include <iostream>

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return (0);
}


// int main()
// {
// 	ICharacter * Jhon = new Character("Jhon");
// 	ICharacter * Tom = new Character("Tom");
// 	ICharacter * Sam = Jhon;
// 	ICharacter * Fred ;
// 	AMateria * Choco = new Ice();
// 	AMateria * Vani = new Ice();
// 	AMateria * Cu = new Cure();
// 	AMateria * Re = new Cure();
// 	AMateria * Soin = new Ice();

// 	Fred = Sam;
// 	Jhon->equip(Choco);
// 	std::cout << "Jhon ";
// 	Jhon->use(0, *Tom);
// 	Jhon->use(1, *Tom);
// 	std::cout << "Tom ";
// 	Tom->use(0, *Jhon);
// 	std::cout << "Sam ";
// 	Sam->use(0, *Jhon);
// 	std::cout << "Fred ";
// 	Fred->use(0, *Jhon);
// 	Jhon->equip(Vani);
// 	std::cout << "Jhon ";
// 	 Jhon->use(1, *Jhon);
// 	Jhon->equip(Cu);
// 	Jhon->equip(Re);
// 	std::cout << "Jhon ";
// 	Jhon->use(2, *Jhon);
// 	Jhon->equip(Soin);
// 	std::cout << "Jhon ";
// 	Jhon->use(3, *Jhon);

// 	delete Jhon;
// 	delete Tom;
// 	return 0;
// }
