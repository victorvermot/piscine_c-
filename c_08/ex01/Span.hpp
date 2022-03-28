#ifndef SPAN_H
# define SPAN_H

# include <algorithm>
# include <iostream>
# include <vector>

class Span
{
public:
    Span();
    Span(unsigned int);
    ~Span();
    void addNumber(int new_num);
    class TooManyNum : std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("You reached the maximum capacity.\n");
            }
    };
private:
    unsigned int _size;
    unsigned int _capacity;
    std::vector<int> tab;
};

#endif