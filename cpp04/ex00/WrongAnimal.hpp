#ifndef WrongAnimal_H
# define WrongAnimal_H

#include <iostream>

class WrongAnimal
{

	public:
		WrongAnimal(void);
		WrongAnimal(std::string _type);
		~WrongAnimal(void);
		WrongAnimal & operator=(WrongAnimal const & rhs);
		virtual void makeSound();
		const std::string 	&getType() const;
	protected:
		std::string _type;
};

class WrongDog : public WrongAnimal
{
	public :
		WrongDog(void);
		WrongDog(std::string _type);
		~WrongDog(void);
		virtual void makeSound();
};

class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
		WrongCat(std::string _type);
		~WrongCat(void);
		virtual void makeSound();
};


#endif
