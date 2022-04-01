#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
    std::cout << "WrongAnimal String Constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& rhs)
{
    std::cout << "Equal operator overload" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "I make noise" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}
