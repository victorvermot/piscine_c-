#ifndef CONVERSISON_H
# define CONVERSISON_H

# include <iostream>

struct Data
{
    int trash;
};

uintptr_t serialize(Data* ptr);
Data*     deserialize(uintptr_t raw);

#endif