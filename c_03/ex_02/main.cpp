#include "FragTrap.hpp"

int main(void)
{
    // ClapTrap b("Bite");
    FragTrap a("\"Con\"");
    // b.attack("Un autre con");
    a.takeDamage(50);
    a.beRepaired(30);
    // a.takeDamage(80);
    a.highFivesGuys();
}
