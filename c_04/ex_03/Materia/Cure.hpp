class Cure;

#ifndef CURE_H
# define CURE_H

# include <iostream>
# include <AMateria.hpp>

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    virtual AMateria* clone() const;
    void use(ICharacter& target);

private:

};

#endif