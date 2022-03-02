#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energy_pts = 50;
    _attack_dmg = 20;

    std::cout << "ScavTrap constructor called" << std::endl;
    std::cout << name << std::endl;
    std::cout << _hitpoints << std::endl;
    std::cout << _energy_pts << std::endl;
    std::cout << _attack_dmg << std::endl;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " has entered gatekeeping mode" << std::endl;
}
