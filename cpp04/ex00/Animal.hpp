#ifndef Animal_H
# define Animal_H

#include <iostream>

class Animal
{

	public:
		Animal(void);
		Animal(std::string _type);
		~Animal(void);
		Animal & operator=(Animal const & rhs);
		virtual void makeSound() ;
		const std::string 	&getType() const;
	protected:
		std::string _type;
};

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(std::string _type);
		~Dog(void);
		virtual void makeSound();
};

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(std::string _type);
		~Cat(void);
		virtual void makeSound();
};


#endif
