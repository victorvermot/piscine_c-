#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure base constructor called" << std::endl;
    return ;
}

Cure::~Cure()
{
	std::cout << "Cure copy constructor called" << std::endl;
    return ;
}

void Cure::use(ICharacter& target)
{
    std::cout << "Cure : heals " << target.getName() << " wounds." << std::endl;
}

Cure::Cure(const Cure& other)
{
	std::cout << "Cure copy constructor called" << std::endl;
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
