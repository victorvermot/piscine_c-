#include "Karen.hpp"

int main(void)
{
    void (Karen::*f)(std::string);
    Karen   instance;

    f = &Karen::complain;
    (instance.*f)("Debug");
    (instance.*f)("Error");
    (instance.*f)("Info");
    (instance.*f)("Warning");
}
