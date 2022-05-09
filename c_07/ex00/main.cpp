#include "functions.hpp"

int main()
{
    int a = 4;
    int b = 42;
	std::string test = "sang";
	std::string test2 = "le";

    std::cout << "Before the swap" << std::endl;
    std::cout << "a : " << test << std::endl;
    std::cout << "b : " << test2 << std::endl;
    swap(test, test2);
    std::cout << "After the swap" << std::endl;
    std::cout << "a : " << test << std::endl;
    std::cout << "b : " << test2 << std::endl;
    std::cout << "The max is : " << max(a, b) << std::endl;
    std::cout << "The min is : " << min(a, b) << std::endl;
}
