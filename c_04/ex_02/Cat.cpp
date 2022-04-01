#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat Default Constructor called" << std::endl;
    cerveau = new Brain();
    return ;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete cerveau;
    return ;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = other;
}

Cat& Cat::operator = (const Cat& rhs)
{
    std::cout << "Cat equal overload operator" << std::endl;
    if (this != &rhs)
    {
        this->cerveau = rhs.cerveau;
        this->type = rhs.type;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}
