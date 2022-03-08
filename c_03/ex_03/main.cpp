#include "DiamondTrap.hpp"

int main(void)
{
    // ScavTrap a("Serge");
    DiamondTrap b("Yvan");
    DiamondTrap c(b);
    ScavTrap d("Yoann");
    std::cout << std::endl << std::endl;
    // ScavTrap b(a);
    // DiamondTrap b(a);
    d.guardGate();
    d.takeDamage(20);
    b.takeDamage(50);
    // b.attack("un con");
    // b.beRepaired(60);
    // c.highFivesGuys();
    c.whoAmI();
    c.attack("une antilope");
    c.beRepaired(40);
    c.beRepaired(40);
    b.guardGate();
}
