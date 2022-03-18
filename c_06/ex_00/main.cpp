#include "includes.hpp"

void get_type(const char *arg)
{
    if (is_int(arg))
        print_int(atoi(arg));
    else if (is_char(arg))
        print_char(arg[0]);
    else if (is_double(arg))
        print_double(atof(arg));
    else if (is_float(arg))
        print_float(atof(arg));
    else if (is_nan(arg))
        print_nan(arg, is_nan(arg));
    else
        std::cout << "Impossible conversion, mission aborted." << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    get_type(argv[1]);
    return (0);
}
