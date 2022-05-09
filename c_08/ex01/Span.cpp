#include "Span.hpp"

Span::Span()
{
    std::cout << "Default constructor called." << std::endl;
    return ;
}

Span::Span(const Span& other)
{
	*this = other;
	return ;
}

Span& Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		this->_capacity = rhs._capacity;
		this->tab = rhs.tab;
	}
	return (*this);
}

Span::Span(unsigned int num) : _size(0), _capacity(num)
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
	if (_size + range >= _capacity)
		throw TooManyNum();
	_size += range;
	for (int i = 0; i < range; i++)
	{
		tab.insert(tab.end(), std::rand());
	}
	std::cout << "There are now " << _size << " entries in the container." << std::endl;
}

int  Span::shortestSpan()
{
    int min;
    if (_size < 2)
        throw NotEnoughNum();
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

const char* Span::TooManyNum::what() const throw()
{
	return ("You reached the maximum capacity.\n");
}

const char* Span::NotEnoughNum::what() const throw()
{
	return ("Not enough numbers are stored in the class\n");
}

int  Span::longestSpan()
{
    if (_size < 2)
        throw NotEnoughNum();
    return (*std::max_element(tab.begin(), tab.end()) - *std::min_element(tab.begin(), tab.end()));
}

Span::~Span()
{
    std::cout << "Destructor called." << std::endl;
    return ;
}
