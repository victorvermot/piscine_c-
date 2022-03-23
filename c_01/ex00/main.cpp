#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie  *new_zombie;

    new_zombie = new Zombie(name);
    return (new_zombie);
}

void randomChump( std::string name )
{
    Zombie  connard(name);

    connard.announce();
    return ;
}

int main()
{
    Zombie  *new_zombie;
    new_zombie = newZombie("Head_Zombie");
    randomChump("Stack_Zombie");
    delete(new_zombie);
    return (0);
}
