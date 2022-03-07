#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
    return ;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
    return ;
}

Ice* Ice::clone() const
{
    Ice* ret = new Ice();
    return (ret);
}

void Ice::use(ICharacter& target)
{
    std::cout << "Ice : * shoots an ice bolt at " << target.getName() << std::endl;
}
