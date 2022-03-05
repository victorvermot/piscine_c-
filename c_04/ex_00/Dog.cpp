#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    return ;
}

Dog::~Dog()
{
    return ;
}

void Dog::makeSound() const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}
