#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class Convert
{

	public:

		Convert();
		Convert(int i);
		Convert( Convert const & src );
		~Convert();

		Convert &		operator=( Convert const & rhs );
		void		to_int(const char *str);
		void		to_char(const char *str);
		void		to_float(const char *str);
		void		to_double(const char *str);
		void		impossible(const char *str);
		void		convert_string(int type, const char *str);

	private:

};


#endif /* ********************************************************* CONVERT_H */
