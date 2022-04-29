#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
    _type = "Animal";
    return ;
}

Animal::Animal(std::string name) : _type(name)
{
    std::cout << "Animal String Constructor called" << std::endl;
    return ;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
    return ;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = other;
}

Animal& Animal::operator = (const Animal& rhs)
{
    std::cout << "Equal Overload Operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

std::string Animal::getType() const
{
    return (_type);
}

void Animal::makeSound() const
{
    std::cout << "I make noise" << std::endl;
}