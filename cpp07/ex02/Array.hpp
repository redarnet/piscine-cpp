#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <iomanip>
template <typename T>
class Array
{
	public:
		Array(void){T *elem = new T();}
		Array(unsigned int n)
		{
			//for (int i = 0; i <= n; i++)
				T *elem = new T(n + 1);
				this->_n = n;
			 return ;
		}
		~Array(void){ }
 		Array & operator=(Array const & rhs){ return *this;}

		int	size(void){ return this->_n;}

	private:
		int _n;
		T elem;
};


#endif
