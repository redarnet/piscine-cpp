#ifndef Brain_H
# define Brain_H

#include <iostream>

class Brain
{

	public:
		Brain(void);
		Brain(const Brain &src);
		~Brain(void);
		Brain & operator=(Brain const & rhs);
		const std::string 	&getType() const;
		std::string ideas[100];
	private:
		std::string _type;

};
#endif
