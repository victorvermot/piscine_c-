#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    cerveau = new Brain();
    return ;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete cerveau;
    return ;
}

void Dog::makeSound() const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}
