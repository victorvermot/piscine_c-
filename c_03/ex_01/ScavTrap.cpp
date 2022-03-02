#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energy_pts = 50;
    _attack_dmg = 20;

    std::cout << "ScavTrap constructor called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}
