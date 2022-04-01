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

void Span::addRange(int range)
{
    std::vector<int>::iterator it;

    for (int i = 0; i < range; i++)
    {
        
    }
    void insert (iterator position, size_type n, const value_type& val);
}

int  Span::shortestSpan()
{
    int min;
    if (_size < 2)
    {
        throw NotEnoughNum();
    }
    std::sort(tab.begin(), tab.end());
    min = tab[1] - tab[0];
    for (std::vector<int>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        if (it + 1 != tab.end())
        {
            if (min > *(it + 1) - *it)
                min = *(it + 1) - *it;
        }
    }
    return (min);
}

int  Span::longestSpan()
{
    if (_size < 2)
    {
        throw NotEnoughNum();
    }
    return (*std::max_element(tab.begin(), tab.end()) - *std::min_element(tab.begin(), tab.end()));
}

Span::~Span()
{
    std::cout << "Destructor called." << std::endl;
    return ;
}
