#include <string>
#include <iostream>

class ACharacter
{
	public:
		virtual void attack(std::string const & target) = 0;
		void sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
	public :
		virtual void attack(std::string const & target);
};


void	ACharacter::sayHello(std::string const & target)
{
	std::cout << " Hello" << target << std ::endl;
}

void	Warrior::attack(std::string const & target)
{
	std::cout << "attacks" << target << " with a sword" << std::endl;
}

/*
class IcoffeMaker
{
	public:
		virtual void fillWaterTank(Iwattersource *src) = 0;
		virtual Icoffe * makeCoffe(std::string const & type) = 0;
};
*/

int main()
{
	ACharacter* a = new Warrior();

	a->sayHello("student");
	return 0;
}

