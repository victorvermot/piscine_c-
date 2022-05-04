#ifndef CONVERSISON_H
# define CONVERSISON_H

# include <iostream>

struct Data
{
    int trash;
	int num;
	char c;
};

uintptr_t serialize(Data* ptr);
Data*     deserialize(uintptr_t raw);

#endif