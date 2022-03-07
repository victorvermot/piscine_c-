#ifndef MATERIA_H
# define MATERIA_H

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:

    Ice();
    ~Ice();
    Ice* clone() const;
    void use(ICharacter& target);

};

#endif