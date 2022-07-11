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
		virtual void makeSound() const;
		const std::string 	&getType() const;
		int		getValue(void) const;
	protected:
		std::string _type;
		std::string _name;
	private :
		int _n;
};

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(std::string _type);
		~Dog(void);
		Dog & operator=(Dog const & rhs);
		virtual void makeSound() const;
	private :
		int _n;
};

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(std::string _type);
		~Cat(void);
		Cat & operator=(Cat const & rhs);
		virtual void makeSound() const;
	private :
		int _n;
};


#endif
