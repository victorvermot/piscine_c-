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
		std::cout <<  easyfind(tab, 2) << std::endl;
		std::cout <<  easyfind(tab, 42) << std::endl;
    }
    catch(NoFind& e)
    {
        std::cerr << e.what();
    }
}
