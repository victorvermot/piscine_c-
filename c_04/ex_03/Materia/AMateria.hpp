#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "../Character/ICharacter.hpp"

class AMateria
{
protected:
    std::string _type;
public:
    AMateria(std::string const & type);
    AMateria(AMateria& other);
    AMateria();
    virtual ~AMateria();
    AMateria& operator = (AMateria& rhs);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};

#endif