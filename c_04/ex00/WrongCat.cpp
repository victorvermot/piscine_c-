#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat")
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator = (const WrongCat& rhs)
{
    std::cout << "WrongCat Equal Operator Overload" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}
