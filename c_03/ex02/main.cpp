#include "FragTrap.hpp"

int main(void)
{
    ClapTrap base("Stairs");
    FragTrap heritier("C1R6S3");
    // b.attack("Un autre con");
    heritier.takeDamage(50);
    heritier.beRepaired(30);
    heritier.attack("Jean Charles'");
    // a.takeDamage(80);
    heritier.highFivesGuys();
    base.takeDamage(5);
    base.attack("Jean Bat'");
}
