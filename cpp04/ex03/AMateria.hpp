#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
	public :
		Ice(void);
		~Ice(void);
		Ice(Ice const & src);
		virtual AMateria * clone() const;
		Ice & operator=(Ice const & rhs);
		virtual void use(ICharacter & target);
};

class Cure : public AMateria
{
	public :
		Cure(void);
		~Cure(void);
		Cure(Cure const & src);
		virtual void use (ICharacter & target);
		virtual AMateria * clone() const;
		Cure & operator=(Cure const & rhs);
};

#endif
