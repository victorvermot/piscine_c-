#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : _name(n), _weapon(w)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
