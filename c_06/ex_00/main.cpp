#include <iostream>



int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    std::cout << "int : " << reinterpret_cast<int>(argv[1]);
    std::cout << "char : " << reinterpret_cast<char>(argv[1]);
    std::cout << "float : " << reinterpret_cast<float>(argv[1]);
    std::cout << "double : " << reinterpret_cast<double>(argv[1]);
    return (0);
}
