#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hp(100), _ep(100),_ad(30), _m_hp(100)
{
	std::cout << "ScavTrap string constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
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

void ScavTrap::guardGate(void)
{
	if (_hitpoints && _energy_pts)
	{
		std::cout << "Scavtrap " << _name << " has entered gatekeeping mode ! " << std::endl;
		_energy_pts--;
	}
	else
		std::cout << "The Fragrtrap is DEAD" << std::endl;
}
