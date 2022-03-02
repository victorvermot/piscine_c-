#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap b("Bite");
    ScavTrap a("Con");
    b.attack("Un autre con");
    a.guardGate();
}
