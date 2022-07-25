#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

		public:
			MutantStack(void);
			MutantStack(MutantStack const & src);
			~MutantStack(void){}
			MutantStack & operator=(MutantStack const & rhs);
			class iterator
			{
				public:
					iterator & operator++(){
						return *this;
					}
			};
			// std::ostream & operator<<(std::ostream & o , iterator const & rhs)
			// {
			// 	rhs.begin();
			// 	return o;
			// }
			iterator	  begin(){
				iterator test;
				return test;
			}
};

template <typename T>
std::ostream & operator<<(std::ostream & o , MutantStack<T> const & rhs);


template <typename T>
MutantStack<T>::MutantStack()
{
	return;
}



template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & rhs)
{
	*this = rhs;
	return *this;
}




template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & rhs)
{
	*this = rhs;
	return *this;
 }

template <typename T>
std::ostream & operator<<(std::ostream & o, MutantStack<T> const & rhs)
{
	rhs.begin();
	return o;
}


#endif
