#ifndef Span_H
# define Span_H

#include <iostream>
#include <list>


class Span
{

        public:
                Span(void);
                Span(int _N);
                ~Span(void);
                Span & operator=(Span const & rhs);
			int		getNum(void) const;
			void	addNumber(int x);
			void	shortestSpan();
			void	longestSpan();
			void	affiche_list();

        private:
		std::list<int> lst;
		unsigned int _N;

};

std::ostream & operator<<(std::ostream & o , Span const &rhs);
#endif
