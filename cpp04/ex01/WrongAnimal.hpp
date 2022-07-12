#ifndef WrongAnimal_H
# define WrongAnimal_H

#include <iostream>

class WrongAnimal
{

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal(void);
		WrongAnimal & operator=(WrongAnimal const & rhs);
		virtual void makeSound() const;
		const std::string 	&getType() const;
	protected:
		std::string _type;
};

class WrongDog : public WrongAnimal
{
	public :
		WrongDog(void);
		WrongDog(WrongDog const & src);
		virtual ~WrongDog(void);
		WrongDog & operator=(WrongDog const & rhs);
		virtual void makeSound() const;
};

class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
		WrongCat(WrongCat const & src);
		virtual ~WrongCat(void);
		WrongCat & operator=(WrongCat const & rhs);
		virtual void makeSound() const;
};


#endif
