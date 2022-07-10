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

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		int		getValue(void) const;
		float toFloat(void) const;
		int toInt(void) const;
		Fixed & operator=(Fixed const & rhs);
		bool operator>(Fixed const & rhs)const;
		bool operator<(Fixed const & rhs)const;
		bool operator<=(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);
		Fixed & operator++();
		Fixed & operator--();
		Fixed  operator++(int);
		Fixed  operator--(int);
		Fixed  operator+(Fixed const & rhs)const;
		Fixed  operator-(Fixed const & rhs)const;
		Fixed  operator*(Fixed const & rhs)const;
		Fixed  operator/(Fixed const & rhs)const;
		Fixed & operator*=(Fixed const &rhs);
		static const Fixed & min(Fixed const & i, Fixed const & y);
		static const Fixed & max(Fixed const & i, Fixed const & y);
		static Fixed & min(Fixed & i, Fixed & y);
		static Fixed & max(Fixed & i, Fixed & y);

	private :
		int _n;
		static int const _b = 8;


};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


#endif
