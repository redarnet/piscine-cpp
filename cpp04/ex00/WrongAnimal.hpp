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
		virtual void makeSound() const;
		const std::string 	&getType() const;
		int		getValue(void) const;
	protected:
		std::string _type;
		std::string _name;
	private :
		int _n;
};

class WrongDog : public WrongAnimal
{
	public :
		WrongDog(void);
		WrongDog(std::string _type);
		~WrongDog(void);
		WrongDog & operator=(WrongDog const & rhs);
		virtual void makeSound() const;
	private :
		int _n;
};

class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
		WrongCat(std::string _type);
		~WrongCat(void);
		WrongCat & operator=(WrongCat const & rhs);
		virtual void makeSound() const;
	private :
		int _n;
};


#endif
