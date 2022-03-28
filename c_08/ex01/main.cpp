#include "Span.hpp"

int main(void)
{
    Span a(2);

    try
    {
        a.addNumber(56);
        a.addNumber(2);
        a.addNumber(3);
    }
    catch 
    {

    }
}
