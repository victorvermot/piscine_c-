#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor from brain called" << std::endl;
    return ;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
    return ;
}

Brain& Brain::operator = (const Brain& rhs)
{
    std::cout << "Equal operator overload called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor from brain called" << std::endl;
    return ;
}
