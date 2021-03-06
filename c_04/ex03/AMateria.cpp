#include "AMateria.hpp"

AMateria::AMateria()
{
    return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    return ;
}

AMateria::AMateria(AMateria& other)
{
    *this = other;
}


AMateria& AMateria::operator = (AMateria& rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

AMateria::~AMateria()
{
    return ;
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Originial use fnc " << target.getName() << std::endl;
}
