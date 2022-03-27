#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap basic constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap string constructor called" << std::endl;
    _name = name;
    _hitpoints = FragTrap::_hp;
    _max_hp = FragTrap::_hp;
    _energy_pts = ScavTrap::_ep;
    _attack_dmg = FragTrap::_ad;
    ClapTrap::_name = name + "_clap_name";
    std::cout << "Name : " << _name << std::endl;
    std::cout << "ClapTrap Name : " << ClapTrap::_name << std::endl;
	std::cout << "HP : " <<_hitpoints << std::endl;
	std::cout << "Energy points : " <<_energy_pts << std::endl;
	std::cout << "Attack damages : " <<_attack_dmg << std::endl;
    return ;
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

DiamondTrap::DiamondTrap(DiamondTrap& other)
{
    std::cout << "Diamond copy constructor called : " << std::endl;
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
