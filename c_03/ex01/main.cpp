#include "ScavTrap.hpp"

int main(void)
{
    // ClapTrap b("Bite");
    ScavTrap a("Roro le robot");
    ScavTrap b(a);
    // b.attack("Un autre con");
    a.guardGate();
    a.takeDamage(50);
    a.beRepaired(20);
    a.takeDamage(100);
    a.attack("Slut");
    b.attack("Slut");
    b.takeDamage(10);
}
