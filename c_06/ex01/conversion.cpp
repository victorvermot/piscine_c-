#include "conversion.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t   ret;

    ret = reinterpret_cast<uintptr_t>(ptr);
 // Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t.
    return (ret);
}

Data* deserialize(uintptr_t raw)
{
    Data    *ret;
    ret = reinterpret_cast<Data *>(raw);

    return (ret);
 // Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.
}
