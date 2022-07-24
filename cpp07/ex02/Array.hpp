#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <iomanip>
template <typename T>
class Array
{
	public:
		Array(void);
		Array(Array<T> const & src);
		Array(unsigned int n);
		~Array(void){
			 delete [] elem;
		 }
 		Array & operator=(Array const & rhs)
		 {
			 _n = rhs._n;
	 if (_n == 0)
	 	elem = NULL;
	 else
	 	elem = new T[_n];
	 for (unsigned int i = 0 ; i < _n; i++)
	 {
	 	elem[i] = rhs.elem[i];
	 }
	return *this;
		 }
 		 T & operator[](unsigned int n);
		 int	size(void){ return this->_n;}

		T *elem;
	private:
		unsigned int _n;
};

template <typename T>
Array<T>::Array(void)
{
	_n = 0;
	elem = NULL;
	return;
}

template <typename T>
Array<T>::Array(Array<T> const & src)
{
	*this = src;
	return;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_n = n;
	elem = new T[n]();
	return;
}

// template <typename T>
// Array<T> & Array::operator=(Array const & rhs)
// {
// 	 _n = rhs._n;
// 	   if (elem != NULL)
// 	  	 delete  [] elem;
// 	 if (_n == 0)
// 	 	elem = NULL;
// 	 else
// 	 	elem = new T[_n];
// 	 for (unsigned int i = 0 ; i < _n; i++)
// 	 {
// 	 	this->elem[i] = rhs.elem[i];
// 	 }
// 	return *this;
// }

 template <typename T>
 T & Array<T>::operator[](unsigned int n)
 {
	 if (  elem == NULL || n >= _n)
	 	throw std::exception();
  	return this->elem[n];
 }

#endif
