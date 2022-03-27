#include "Span.hpp"

Span::Span()
{
    std::cout << "Default constructor called." << std::endl;
    return ;
}

Span::Span(unsigned int num) : _size(num)
{
    std::cout << "Default constructor called." << std::endl;
    tab = new int[_size];
    return ;
}

void Span::addNumber(int new_num)
{
    
}


Span::~Span()
{
    std::cout << "Default destructor called." << std::endl;
    return ;
}