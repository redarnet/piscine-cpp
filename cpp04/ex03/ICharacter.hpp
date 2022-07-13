#ifndef ICHARACTER_H
# define ICHARACTER_H

#include <iostream>

class AMateria;

class ICharacter
{
public:
virtual ~ICharacter() {}
virtual std::string const & getName() const = 0;
virtual void equip(AMateria* m) = 0;
virtual void unequip(int idx) = 0;
virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	public :
	Character(void);
	Character(std::string name);
	~Character(void);
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	virtual std::string const & getName() const;
	private :
		std::string _name;
	//	AMateria inventaire[4];
};


#endif
