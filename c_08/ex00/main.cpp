#include "easyfind.hpp"

int main()
{
    std::vector<int> tab;
    tab.push_back(56);
    tab.push_back(4);
    tab.push_back(2);
    tab.push_back(1);

    try
    {
        std::cout <<  easyfind(tab, 69) << std::endl;
    }
    catch(const NoFind& e)
    {
        std::cerr << e.what() << '\n';
    }
}
