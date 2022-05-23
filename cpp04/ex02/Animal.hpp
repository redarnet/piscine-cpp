#ifndef Animal_H
# define Animal_H
#include "Brain.hpp"

#include <iostream>

class AAnimal
{
	public:
		virtual ~AAnimal(void);
		const virtual void makeSound() const = 0;
		const std::string 	&getType() const;
		std::string _type;
};

class Dog : public AAnimal
{
	public :
		Dog(void);
		Dog(std::string _type);
		virtual ~Dog(void);
		const virtual void makeSound() const ;
	private:
		Brain *brain;
};

class Cat : public AAnimal
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
