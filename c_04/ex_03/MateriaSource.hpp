#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include <iostream>
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

# define MATERIA_NUM 2

class AMateria;

typedef struct s_materia {
	std::string name;
	AMateria *content;
} t_materia;

class MateriaSource : public IMateriaSource {

private:
	AMateria *_inventory[4];

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& other);

	MateriaSource& operator = (const MateriaSource&  rhs);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
