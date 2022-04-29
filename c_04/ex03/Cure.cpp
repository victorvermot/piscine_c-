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

Cure::Cure(const Cure& other)
{
	*this = other;
}

Cure& Cure::operator=(const Cure &rhs)
{
	return (*this);
}

AMateria* Cure::clone() const
{
    Cure* ret = new Cure();
    return (ret);
}
