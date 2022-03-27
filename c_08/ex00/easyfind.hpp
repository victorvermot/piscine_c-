#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class NoFind : std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return ("The entry was not found.\n");
        }
};

template<typename T>
int easyfind(const T& container, int num)
{
    for (int i = 0; i < container.size(); i++)
    {
        if (container[i] == num)
            return (container[i]);
    }
    throw NoFind();
    return (0);
}

#endif