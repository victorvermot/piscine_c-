#include "includes.hpp"

int is_int(std::string arg)
{
    int i;

    i = 0;
    while (arg[i])
    {
        if (arg[i] >= '0' && arg[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

int is_char(std::string arg)
{
    unsigned char c;

    c = arg[0];
    if ((c >= 41 && c <= 176) && arg[1] == '\0')
        return (1);
    return (0);
}


int is_double(std::string arg)
{
    int i;
    int point_count;

    i = 0;
    point_count = 0;
    while (arg[i])
    {
        if ((arg[i] >= '0' && arg[i] <= '9') ||arg[i] == '.')
        {
            if (arg[i] == '.')
                point_count++;
            i++;
        }
        else
            return (0);
    }
    if (point_count == 1)
        return (1);
    return (0);
}

int is_float(std::string arg)
{
    int i;
    int point_count;

    i = 0;
    point_count = 0;
    while (arg[i])
    {
        if ((arg[i] >= '0' && arg[i] <= '9') || (arg[i] == '.' || arg[i] == 'f'))
        {
            if (arg[i] == '.')
                point_count++;
            i++;
        }
        else
            return (0);
    }
    if (point_count == 1 && arg[i - 1] == 'f')
        return (1);
    return (0);
}

int is_nan(std::string arg)
{
    if (arg == "nanf" || arg == "-inff" || arg == "+inff")
        return (1);
    else if (arg == "nan" || arg == "-inf" || arg == "+inf")
        return (2);
    return (0);
}
