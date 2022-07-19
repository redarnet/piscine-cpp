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
		int		to_int(float S);
		float string_float(const char *str);

	private:

};


#endif /* ********************************************************* CONVERT_H */
