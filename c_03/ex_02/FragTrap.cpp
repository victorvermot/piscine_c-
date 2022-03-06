#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = HP;
    _energy_pts = EP;
    _attack_dmg = AD;

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