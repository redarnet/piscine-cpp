#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <iomanip>
template <typename T>
class Array
{
	public:
		Array(void);
		Array(Array const & src);
		Array(unsigned int n);
		~Array(void){
			// delete [] elem;
		 }
 		Array<T> & operator=(Array<T> const & rhs);
 		 T & operator[](int n);
		int	size(void){ return this->_n;}

	private:
		unsigned int _n;
		T *elem;
};

template <typename T>
Array<T>::Array(void)
{
	elem = new T[0]();
	_n = 0;
	return;
}

template <typename T>
Array<T>::Array(Array const & src)
{
	*this = src;
	return;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	elem = new T[n]();
	return;
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	//  if (_n)
	 	 delete  [] elem;
	elem = new T[rhs._n];
	for (unsigned int i = 0 ; i < rhs._n; i++)
	{
		this->elem[i] = rhs.elem[i];
	}
	_n = rhs._n;
	return *this;
}

 template <typename T>
 T & Array<T>::operator[](int n)
 {
  	return this->elem[n];
 }

#endif
