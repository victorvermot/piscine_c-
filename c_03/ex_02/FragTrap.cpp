#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energy_pts = 100;
    _attack_dmg = 30;
    _max_hp = 100;

    std::cout << "FragTrap constructor called" << std::endl;
    std::cout << name << std::endl;
    std::cout << _hitpoints << std::endl;
    std::cout << _energy_pts << std::endl;
    std::cout << _attack_dmg << std::endl;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    if (_hitpoints && _energy_pts)
    {
        std::cout << "FragTrap " << _name << " wants to give you a highfive ! ";
        std::cin.ignore();
        _energy_pts--;
    }
    else
        std::cout << "The Fragrtrap is DEAD" << std::endl;
}
