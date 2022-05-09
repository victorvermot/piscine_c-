#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
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

Dog& Dog::operator = (Dog& rhs)
{
    if (this != &rhs)
    {
		this->cerveau = new Brain();
		*this->cerveau = *rhs.cerveau;
        this->type = rhs.type;
    }
    return (*this);
}

Dog::Dog(Dog& other)
{
    *this = other;
}
