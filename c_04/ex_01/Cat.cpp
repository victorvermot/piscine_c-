#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
    cerveau = new Brain();
    return ;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete cerveau;
    return ;
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}
