#include "ICharacter.hpp"


Character::Character()
{
	int i = 0;

	while (i != 4)
	{
		_inventaire[i] = NULL;
		i++;
	}
	return ;
}

Character::Character(std::string name) : _name(name)
{
	int i = 0;

	while (i != 4)
	{
		_inventaire[i] = NULL;
		i++;
	}
	return ;
}

Character::Character(Character const & src)
{
	int i = 0;

	while (i != 4)
	{
		delete _inventaire[i];
		i++;
	}
	*this = src;
	return ;
}

Character::~Character()
{
	int i = 0;

	while (i != 4)
	{
		if (_inventaire[i])
			delete _inventaire[i];
		i++;
	}
	return;

}

Character & Character::operator=(Character const & rhs)
{
	int i = 0;

	while (i != 4)
	{
		delete  _inventaire[i];
		i++;
	}
	i = 0;
	while (i != 4)
	{
		_inventaire[i] = rhs._inventaire[i];
		i++;
	}
	this->_name = rhs._name;
	return *this;
}

void Character::equip(AMateria *m)
{
	int i = 0;

	while (i != 4)
	{
		if (_inventaire[i] == NULL)
		{
			_inventaire[i] = m;
			return ;
		}
		i++;
	}
	delete m;
}

void Character::unequip(int idx)
{
	_inventaire[idx] = NULL;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx > 3)
		return;
	if (_inventaire[idx])
		_inventaire[idx]->use(target);
}

std::string const &	Character::getName() const
{
	return _name;
}
