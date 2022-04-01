#include "Span.hpp"

int main(void)
{
    Span a(4);

    try
    {
        a.addNumber(4);
        a.addNumber(56);
        a.addNumber(2);
        a.addNumber(57);
    }
    catch (Span::TooManyNum& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "The biggest distance is : " << a.longestSpan() << std::endl;
        std::cout << "The shortest distance is : " << a.shortestSpan() << std::endl;
    }
    catch(const Span::NotEnoughNum& e)
    {
        std::cerr << e.what() << '\n';
    }
}
