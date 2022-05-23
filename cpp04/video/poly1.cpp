#include <string>
#include <iostream>

class Character
{
	public:
		virtual void	sayHello(std::string const & target);
};

class Warrior : public Character
{
	public:
		virtual void	sayHello(std::string const & target);
};


void Character::sayHello(std::string const & target)
{
	std::cout << "hello" << std::endl;
}

void Warrior::sayHello(std::string const & target)
{
	std::cout << "f*** offf" << std::endl;
}


int main()
{
	Warrior *a = new Warrior();
	Character *b = new Warrior();

	//not ok
	// Warrior *c = new Character();
	a->sayHello("studs");
	b->sayHello("studs");
}
