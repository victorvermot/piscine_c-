#include "Zombie.hpp"

int main()
{
    Zombie  *new_zombie;
    new_zombie = zombieHorde(10, "con");
    delete [] (new_zombie);
    return (0);
}
