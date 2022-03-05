#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    return ;
}

Cat::~Cat()
{
    return ;
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}
