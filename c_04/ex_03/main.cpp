#include <iostream>
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	Character Yves("Yves");
    Character BadYves("Bad_Yves");
    Ice *materia = new(Ice);
    Yves.equip(materia);
    Character Jean(Yves);
    Yves.use(0, BadYves);
    Jean.use(0, BadYves);
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	delete materia;
	return 0;
}
