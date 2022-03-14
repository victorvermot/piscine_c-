#include <iostream>

#define INT 0 
#define CHAR 1 
#define FLOAT 2 
#define DOUBLE 3 
#define NO_TYPE -1 

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

int get_type(std::string arg)
{
    if (is_int(arg))
        return (INT);
    else if (is_char(arg))
        return (CHAR);
    else if (is_double(arg))
        return (DOUBLE);
    else if (is_float(arg))
        return (FLOAT);
    return (NO_TYPE);
}


int main(int argc, char **argv)
{
    int type;
    if (argc != 2)
        return (1);
    type = get_type(argv[1]);
    std::cout << type << std::endl;
    return (0);
}
