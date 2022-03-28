#include "Span.hpp"

Span::Span()
{
    std::cout << "Default constructor called." << std::endl;
    return ;
}

Span::Span(unsigned int num) : _capacity(num), _size(0)
{
    std::cout << "Default constructor called." << std::endl;
    return ;
}

void Span::addNumber(int new_num)
{
    if (_size < _capacity)
    {
        _size++;
        tab.push_back(new_num);
    }
    else
    {
        throw TooManyNum();
    }
}

Span::~Span()
{
    std::cout << "Default destructor called." << std::endl;
    return ;
}
