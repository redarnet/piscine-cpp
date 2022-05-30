#ifndef Base_H
# define Base_H

#include <iostream>

class Base
{

	public:
		virtual ~Base(void);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base *generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
