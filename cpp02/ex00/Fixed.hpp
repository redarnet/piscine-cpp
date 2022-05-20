#ifndef FIXED_H
# define FIXED_H



class Fixed
{

	public:
		Fixed(void);
		Fixed(const  Fixed & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int _n;
		static int const _b = 8;


};


#endif
