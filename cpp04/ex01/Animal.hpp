#ifndef Animal_H
# define Animal_H
#include "Brain.hpp"

#include <iostream>

class Animal
{

	public:
		Animal(void);
		Animal(std::string _type);
		virtual ~Animal(void);
		Animal & operator=(Animal const & rhs);
		const virtual void makeSound() const;
		const std::string 	&getType() const;
	protected:
		std::string _type;
};

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(std::string _type);
		virtual ~Dog(void);
		const virtual void makeSound() const ;
	private:
		Brain *brain;
};

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(std::string _type);
		virtual ~Cat(void);
		const virtual void makeSound() const;
	private:
		Brain *brain;
};


#endif
