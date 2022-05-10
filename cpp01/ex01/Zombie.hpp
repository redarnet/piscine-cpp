#ifndef ZOMBIE_H
# define ZOMBIE_H


# include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie(void);
		void annouce();
		void setName(std::string name);

	private :
		std::string _name;

};

Zombie *zombieHorde(int N, std::string name);

#endif
