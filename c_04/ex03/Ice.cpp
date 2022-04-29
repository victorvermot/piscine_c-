#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    return ;
}

Ice::~Ice()
{
    return ;
}

Ice::Ice(const Ice& other)
{
	*this = other;
}

Ice& Ice::operator=(const Ice &rhs)
{
	return (*this);
}

AMateria* Ice::clone() const
{
    Ice* ret = new Ice();
    return (ret);
}

void Ice::use(ICharacter& target)
{
    std::cout << "Ice : * shoots an ice bolt at " << target.getName() << std::endl;
}
