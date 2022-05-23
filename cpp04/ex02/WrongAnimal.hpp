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
		const virtual void makeSound() const;
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
		const virtual void makeSound() const ;
};

class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
		WrongCat(std::string _type);
		~WrongCat(void);
		const virtual void makeSound() const;
};


#endif
