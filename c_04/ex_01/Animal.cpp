#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

Animal::Animal(std::string name) : type(name)
{
    std::cout << "Animal string constructor called" << std::endl;
    return ;
}

Animal::Animal(Animal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
    return ;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
    return ;
}

std::string Animal::getType() const
{
    return (type);
}

void Animal::makeSound() const
{
    std::cout << "I make noise" << std::endl;
}

Animal& Animal::operator = (const Animal& rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}
