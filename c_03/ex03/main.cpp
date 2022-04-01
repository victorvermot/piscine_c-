#include "DiamondTrap.hpp"

int main(void)
{
    // ScavTrap a("Serge");
    DiamondTrap b("Yvan");
    DiamondTrap c(b);
    // ScavTrap d("Yoann");
    // ScavTrap b(a);
    // DiamondTrap b(a);
    // d.guardGate();
    // d.takeDamage(20);
    b.takeDamage(50);
    // b.attack("un con");
    // b.beRepaired(60);
    // c.highFivesGuys();
    b.whoAmI();
    b.attack("une antilope");
    b.beRepaired(40);
    b.beRepaired(40);
    b.guardGate();
}
