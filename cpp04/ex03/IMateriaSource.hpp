#ifndef IMAERIASOURCE_H
#define IMAERIASOURCE_H

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
		MateriaSource();
		~MateriaSource();
		virtual void learnMateria(AMateria *);
		virtual AMateria * createMateria(std::string const & type);
}

#endif
