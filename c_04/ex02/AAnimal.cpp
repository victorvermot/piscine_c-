#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

AAnimal::AAnimal(AAnimal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
    return ;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal Destructor called" << std::endl;
    return ;
}

std::string AAnimal::getType() const
{
    return (type);
}

void AAnimal::makeSound() const
{
    std::cout << "I make noise" << std::endl;
}

AAnimal& AAnimal::operator = (const AAnimal& rhs)
{
    std::cout << "Equal operator overload called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}
