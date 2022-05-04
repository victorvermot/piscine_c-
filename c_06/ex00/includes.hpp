#ifndef INCLUDES_H
# define INCLUDES_H

# include <iostream>

// print.cpp
void    print_char(char c);
void    print_int(int num);
void    print_float(float num);
void    print_double(double num);
void    print_nan(std::string strs, int opt);

// get_types.cpp
int     is_int(std::string arg);
int     is_char(std::string arg);
int     is_double(std::string arg);
int     is_float(std::string arg);
int     is_nan(std::string arg);

#endif