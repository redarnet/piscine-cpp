#ifndef FIXED_H
# define FIXED_H


#include <iostream>

class Fixed
{

	public:
		Fixed(void);
		Fixed(const  Fixed & src);
		Fixed(int const n);
		Fixed(float const n);

		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float toFloat(void) const;
		float toInt(void) const;

	private :
		int _n;
		static int const _b = 8;


};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


#endif
