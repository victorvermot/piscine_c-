#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
			delete _inventory[i];
	}
	return ;
}

void MateriaSource::learnMateria(AMateria* newMateria)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = newMateria;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *ret = NULL;
	t_materia materias[MATERIA_NUM] = {
			{"ice", new Ice()},
			{"cure", new Cure()}
	};

	for (int i = 0; i < MATERIA_NUM; i++) {
		if (type == materias[i].name)
			ret = materias[i].content->clone();
		else
			delete materias[i].content;
	}
	return (ret);
}
