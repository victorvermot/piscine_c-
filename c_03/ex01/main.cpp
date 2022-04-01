#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Roro le robot");
    ScavTrap b(a);

    a.guardGate();
    a.takeDamage(50);
    a.beRepaired(20);
    a.takeDamage(100);
    a.attack("Slut");
    b.attack("Slut");
    b.takeDamage(10);
}
