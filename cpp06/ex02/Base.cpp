#include "Base.hpp"
#include <iostream>



Base::~Base(void)
{
		std::cout << "Default Destructor Base called" << std::endl;
		return ;
}

Base * generate(void)
{
	int ale;

	srand(time(NULL));
	ale = (rand() %99) + 1;
	std::cout << ale << std::endl;
	if (ale <= 33)
		return new A;
	else if (ale <= 66)
		return new C;
	return new B;
}

void	identify(Base *p)
{
	A *a =  dynamic_cast<A*>(p);
	if (a == 0)
	{
		B *b = dynamic_cast<B*>(p);
		if (b == 0)
			std::cout << "C 'est un c " << std::endl;
		else
			std::cout << "C 'est un b " << std::endl;
	}
	else
	{
		std::cout << "C 'est un a " << std::endl;
	}

}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "C'est un a";
	}
	catch(std::exception & e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "C'est un b";
		}
		catch(std::exception & e)
		{
			std::cout << "C'est un c";
		}
	}

}
