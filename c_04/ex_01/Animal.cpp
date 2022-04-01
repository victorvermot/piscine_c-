#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

Animal::Animal(std::string name) : type(name)
{
    std::cout << GREEN "Animal string constructor called" << std::endl;
    return ;
}

Animal::Animal(Animal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
    return ;
}

Animal& Animal::operator = (const Animal& rhs)
{
    std::cout << "Equal operator overload called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << RED "Animal Destructor called" << std::endl;
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

