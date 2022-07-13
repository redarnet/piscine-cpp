#include "ICharacter.hpp"


Character::Character()
{

}

Character::Character(std::string name) : _name(name)
{

}

~Character::Character()
{

}

virtual void equip::Character(AMateria *m)
{

}

virtual void unequip::Character(int idx)
{

}

virtual void use::Character(int idx, ICharacter & target)
{

}

std::string const &	getName() const;
{
	return _name;
}
