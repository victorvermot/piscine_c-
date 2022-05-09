#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:

    Ice();
    ~Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& rhs);
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

};

#endif
