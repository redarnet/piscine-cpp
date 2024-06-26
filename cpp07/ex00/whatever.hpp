#ifndef WHATERVER_H
# define WHATERVER_H

#include <iostream>

template <typename T>
void swap(T  &x, T &y)
{
	T tmp;

	tmp = y;
	y = x;
	x = tmp;
}

template <typename T>
T  min(T const  &x, T const  &y)
{
	return ((x<=y) ? x : y);
}

template <typename T>
T max(T const &x, T const &y)
{
	return ((x>=y) ? x : y);
}

#endif
