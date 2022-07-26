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
			typedef typename std::stack<T>::container_type::iterator iterator;
			// std::ostream & operator<<(std::ostream & o , iterator const & rhs)
			// {
			// 	rhs.begin();
			// 	return o;
			// }
			iterator	  begin();
			iterator	  end();
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
	return ;
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

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return this->c.end();
}

#endif
