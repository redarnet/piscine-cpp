#include <iostream>

class Parent				{};
class Child1 : public Parent{};
class Child2 : public Parent{};

class unrelated				{};

int main()
{
	Child1 a; //reference value

	Parent * b = &a //Inpplicit upcast -> ok
	Child1 * c = b //implicit downcast -> no
	Child2	* d =  static_cast<Child2 * >(b) //explicit downcast -> ok

	unrelated *e = static_cast<unrelated *>(&a) //explicit convertion => no
}
