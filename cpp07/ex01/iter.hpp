#ifndef ITER_H
# define ITER_H

#include <iostream>



template <typename T>
void iter(T  *x,int  y, void (*f)(T *elem))
{
	for(int i = 0; i <= y; i++)
		f(&x[i]);
}


#endif
