#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Super Clap");

    a.attack("Super Crap");
    a.beRepaired(50);
    a.takeDamage(8);
    a.beRepaired(5);
    a.takeDamage(1000);
    a.beRepaired(1000);
}
