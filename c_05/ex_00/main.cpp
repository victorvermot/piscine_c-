#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Richard(189, "Richard");
    Richard.demotion();
    Richard.demotion();
    std::cout << Richard << std::endl;
}
