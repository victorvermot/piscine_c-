#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap string constructor called" << std::endl;
	std::cout << "Name : " << name << std::endl;
	std::cout << "HP : " <<_hitpoints << std::endl;
	std::cout << "Energy points : " <<_energy_pts << std::endl;
	std::cout << "Attack damages : " <<_attack_dmg << std::endl;
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
