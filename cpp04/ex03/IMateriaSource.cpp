#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_nb = 0;
	int i = 0;

	while (i != 4)
	{
		_mate[i] = NULL;
		i++;
	}
	return;
}


MateriaSource::~MateriaSource()
{
	int i = 0;

	while (i != 4)
	{
		if (_mate[i])
			delete _mate[i];
		i++;
	}
	return ;
}

void	MateriaSource::learnMateria(AMateria * materia)
{
	if (_nb < 4)
	{
		_mate[_nb] = materia->clone();
		this->_nb++;
	}
	delete materia;

}

AMateria * MateriaSource::createMateria(std::string const & type)
{

	int i = 0;

	while (i != 4)
	{
		if (type == _mate[i]->getType())
		{
			AMateria * cpy = _mate[i]->clone();
			return cpy;
		}
		i++;
	}
	return NULL;
}
