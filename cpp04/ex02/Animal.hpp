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
		std::string _name;
};

class Dog : public AAnimal
{
	public :
		Dog(void);
		Dog(std::string _type);
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
		Cat(std::string _type);
		virtual ~Cat(void);
		Cat & operator=(Cat const & rhs);
		virtual void makeSound() const;
	private:
		Brain *brain;
};


#endif
