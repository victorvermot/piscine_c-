#include "Animal.hpp"

Animal::Animal()
{
    return ;
}

Animal::Animal(std::string name) : type(name)
{
    return ;
}

Animal::~Animal()
{
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