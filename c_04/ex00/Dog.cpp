#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default Constructor called" << std::endl;
    return ;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    return ;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = other;
}

Dog& Dog::operator = (const Dog& rhs)
{
    std::cout << "Dog equal opertator overload" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}
