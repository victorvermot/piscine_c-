#ifndef SPAN_H
# define SPAN_H

# include <algorithm>
# include <iostream>
# include <vector>

class Span
{
private:
    unsigned int _size;
    unsigned int _capacity;
    std::vector<int> tab;

public:
    Span();
    Span(unsigned int);
	Span(const Span& other);
	Span& operator=(const Span& rhs);
    ~Span();

    void addNumber(int new_num);
    void addRange(int range);
    int  shortestSpan();
    int  longestSpan();

    class TooManyNum : std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("You reached the maximum capacity.\n");
            }
    };
    class NotEnoughNum : std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("Not enough numbers are stored in the class\n");
            }
    };

};

#endif