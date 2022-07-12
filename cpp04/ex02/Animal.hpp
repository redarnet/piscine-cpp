#ifndef Animal_H
# define Animal_H
#include "Brain.hpp"

#include <iostream>

class AAnimal
{
	public:
		virtual ~AAnimal(void);
		virtual void makeSound() const = 0;
		const std::string 	&getType() const;
	protected :
		std::string _type;
};

class Dog : public AAnimal
{
	public :
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);
		Dog & operator=(Dog const & rhs);
		virtual void makeSound() const ;
	private:
		Brain *brain;
};

class Cat : public AAnimal
{
	public :
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);
		Cat & operator=(Cat const & rhs);
		virtual void makeSound() const;
	private:
		Brain *brain;
};


#endif
