#ifndef IMAERIASOURCE_H
#define IMAERIASOURCE_H
#include <iostream>
#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
public:
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource(void);
		~MateriaSource(void);
		virtual void learnMateria(AMateria * materia);
		virtual AMateria * createMateria(std::string const & type);
	private :
		AMateria * _mate[4];
		int _nb;
};

#endif
