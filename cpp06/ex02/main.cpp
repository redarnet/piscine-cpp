#include <iostream>
#include "Base.hpp"



int main(int argc,const char **argv)
{
	Base *a = generate();

	identify(a);
	identify(*a);


	return 0;
}
