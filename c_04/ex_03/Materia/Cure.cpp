#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    return ;
}

Cure::~Cure()
{
    return ;
}

void Cure::use(ICharacter& target)
{
    std::cout << "Cure : heals " << target.getName() << " wounds." << std::endl;
}

AMateria* Cure::clone() const
{
    Cure* ret = new Cure();
    return (ret);
}
