#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRIAN";
    std::string str2 = "HI THIS IS BRIAN 2";
    std::string& stringRef = str;
    std::string* stringPtr = &str;

    std::cout << "adresse de str : " << &str << std::endl
    << "addresse de stringRef : " << &stringRef << std::endl
    << "addresse de stringPtr : " << stringPtr << std::endl;

    std::cout << std::endl << "valeur de str : " << str << std::endl
    << "valeur de stringRef : " << stringRef << std::endl
    << "valeur de stringPtr : " << *stringPtr << std::endl;
}
