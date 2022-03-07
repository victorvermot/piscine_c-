#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    cerveau = new Brain();
    return ;
}

Dog::~Dog()
{
    std::cout << RED "Dog destructor called" << std::endl;
    delete cerveau;
    return ;
}

void Dog::makeSound() const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}

Dog& Dog::operator = (Dog& rhs)
{
    if (this != &rhs)
    {
        this->cerveau = rhs.cerveau;
        this->type = rhs.type;
    }
    return (*this);
}

Dog::Dog(Dog& other) : AAnimal("Dog")
{
    *this = other;
}
