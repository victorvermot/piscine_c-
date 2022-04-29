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

Ice::Ice(const Ice& other)
{
	std::cout << "Ice copy constructor called" << std::endl;
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
