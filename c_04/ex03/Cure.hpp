#ifndef CURE_H
# define CURE_H

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& rhs);
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

private:

};

#endif
