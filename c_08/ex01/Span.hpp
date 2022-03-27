#ifndef SPAN_H
# define SPAN_H

# include <algorithm>
# include <iostream>

class Span
{
public:
    Span();
    Span(unsigned int);
    ~Span();
    void addNumber(int new_num);

private:
    unsigned int _size;
    int *tab;
};

#endif