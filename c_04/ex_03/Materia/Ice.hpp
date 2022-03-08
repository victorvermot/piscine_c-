class Ice;

#ifndef ICE_H
# define ICE_H

# include <iostream>
# include <AMateria.hpp>

class Ice : public AMateria
{
public:

    Ice();
    ~Ice();
    virtual AMateria* clone() const;
    void use(ICharacter& target);

};

#endif