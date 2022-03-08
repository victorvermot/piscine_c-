#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap basic constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap string constructor called" << std::endl;
    std::cout << FragTrap::_name << std::endl;
    _name = name;
    _hitpoints = FragTrap::_hp;
    _max_hp = FragTrap::_hp;
    _energy_pts = ScavTrap::_ep;
    _attack_dmg = FragTrap::_ad;
    std::cout << "les dmg de fragtrap "<< FragTrap::_attack_dmg << std::endl;
    ClapTrap::_name = name + "_clap_name";
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& rhs)
{
    std::cout << "Diamond Operator overload called : " << std::endl;
	if (this != &rhs)
	{
		this->_attack_dmg = rhs._attack_dmg;
		this->_hitpoints = rhs._hitpoints;
		this->_energy_pts = rhs._energy_pts;
		this->_max_hp = rhs._hitpoints;
        this->_name = rhs._name;
	}
	return (*this);
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
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is : " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
