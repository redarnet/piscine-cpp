#ifndef OPERATEUR_H
#define OPERATEUR_H

class integer
{
	public :
		integer(int const n);
		~integer(void);

		int getValue(void)const;
		integer & operator=( integer const & rhs);
		// rhs = rwite hon side >
		// instance class courant > 2 para this
		//instance courante renvoyer > a= b = c = d &
		integer  operator+( integer const & rhs)const;
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, integer const & rhs);
#endif
