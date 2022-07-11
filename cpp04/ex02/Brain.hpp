#ifndef Brain_H
# define Brain_H

#include <iostream>

class Brain
{

	public:
		Brain(void);
		Brain(std::string name);
		~Brain(void);
		Brain & operator=(Brain const & rhs);
		const std::string 	&getType() const;
		int	getValue(void) const;
		std::string ideas[100];
	private:
		std::string _type;
	private :
		int _n;
		std::string _name;

};
#endif
