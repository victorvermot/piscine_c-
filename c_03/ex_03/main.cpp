#include "DiamondTrap.hpp"

int main(void)
{
    ScavTrap a("Serge");
    std::cout << std::endl << std::endl;
    ScavTrap b = a;
    // DiamondTrap b(a);
    b.takeDamage(50);
    b.attack("un con");
    b.beRepaired(60);
    // a.highFivesGuys();
    // b.whoAmI();
    b.guardGate();
}
