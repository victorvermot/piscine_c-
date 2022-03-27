#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 30, 100)
{
    std::cout << "FragTrap string constructor called" << std::endl;
	std::cout << "Name : " << name << std::endl;
	std::cout << "HP : " <<_hitpoints << std::endl;
	std::cout << "Energy points : " <<_energy_pts << std::endl;
	std::cout << "Attack damages : " <<_attack_dmg << std::endl;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "Operator = overload" << std::endl;
	if (this != &rhs)
	{
		this->_attack_dmg = rhs.getAttackDmg();
		this->_hitpoints = rhs.getHitPoints();
		this->_energy_pts = rhs.getEnergyPoints();
		this->_max_hp = rhs.getMaxHp();
		this->_name = rhs.getName();
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (_hitpoints && _energy_pts)
    {
        std::cout << "FragTrap " << _name << " gave you a magnificient highfive ! " << std::endl;
        _energy_pts--;
    }
    else
        std::cout << "The Fragrtrap is DEAD" << std::endl;
}
