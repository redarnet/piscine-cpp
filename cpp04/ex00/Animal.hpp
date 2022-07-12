#ifndef Animal_H
# define Animal_H

#include <iostream>

class Animal
{

	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & rhs);
		virtual void makeSound() const;
		const std::string 	&getType() const;
	protected:
		std::string _type;
};

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);
		Dog & operator=(Dog const & rhs);
		virtual void makeSound() const;
};

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(Cat const & rhs);
		virtual ~Cat(void);
		Cat & operator=(Cat const & rhs);
		virtual void makeSound() const;
};


#endif
