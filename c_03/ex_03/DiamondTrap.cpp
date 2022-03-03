#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap basic constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name), _name(name)
{
    std::cout << "DiamondTrap string constructor called" << std::endl;
    std::cout << FragTrap::_name << std::endl;
    _hitpoints = FragTrap::_hitpoints;
    _max_hp = FragTrap::_hitpoints;
    _energy_pts = ScavTrap::_energy_pts;
    _attack_dmg = FragTrap::_attack_dmg;
    ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(DiamondTrap& other) : ClapTrap(other)
{
    _name = other._name;
    *this = other;
}

DiamondTrap::~DiamondTrap()
{
    std::cout <<  "DiamondTrap destructor called" << std::endl;
    return ;
}

void DiamondTrap::attack(const std::string& target)
{
    FragTrap::attack(target);
    std::cout << FragTrap::_name << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is : " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
