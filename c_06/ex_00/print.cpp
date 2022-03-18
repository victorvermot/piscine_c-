#include <iostream>
#include <iomanip>

void    print_char(char c)
{
    c = static_cast<int>(c);
    std::cout << "char : " << static_cast<char>(c) << std::endl
    << "int: " << c << std::endl
    << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << 'f' << std::endl
    << "double: " << static_cast<double>(c) << std::endl;
}

void    is_char_valid(int c)
{
    if (c < 33 || c > 126)
        std::cout << "char : Non Displayable" << std::endl;
    else
        std::cout << "char : " << static_cast<char>(c) << std::endl;
}

void    print_int(int num)
{
    is_char_valid(num);
    std::cout << "int: " << num << std::endl
    << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << 'f' << std::endl
    << "double: " << static_cast<double>(num) << std::endl;
}

void    print_float(float num)
{
    is_char_valid(static_cast<int>(num));
    std::cout << "int: " << static_cast<int>(num) << std::endl
    << "float: " << num << 'f' << std::endl
    << "double: " << num << std::endl;
}

void    print_double(double num)
{
    is_char_valid(static_cast<int>(num));
    std::cout << "int: " << static_cast<int>(num) << std::endl
    << "float: " << num << 'f' << std::endl
    << "double: " << num << std::endl;
}

void    print_nan(std::string strs, int opt)
{
    std::cout << "char: " << "impossible" << std::endl
    << "int: " << "impossible" << std::endl;
    if (opt == 1)
    {
        std::cout << "float: " << strs << std::endl
        << "double: " << strs.erase(strs.size() - 1) << std::endl;
    }
    else
        std::cout << "float: " << strs + 'f' << std::endl
        << "double: " << strs << std::endl;
}
