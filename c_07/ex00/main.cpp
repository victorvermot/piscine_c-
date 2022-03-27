#include "functions.hpp"

int main()
{
    int a = 4;
    int b = 42;
    int c = 42;

    std::cout << "Before the swap" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    swap(&a, &b);
    std::cout << "After the swap" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "The max is : " << max(a, b) << std::endl;
    std::cout << "The max is : " << max(b, c) << std::endl;
    std::cout << "The min is : " << min(a, b) << std::endl;
}
