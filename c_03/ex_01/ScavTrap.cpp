#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

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

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->_attack_dmg = rhs.getAttackDmg();
		this->_hitpoints = rhs.getHitPoints();
		this->_energy_pts = rhs.getEnergyPoints();
	}
	return (*this);
}

void ScavTrap::guardGate(void)
{
	if (_hitpoints && _energy_pts)
	{
		std::cout << "Scavtrap " << _name << " has entered gatekeeping mode ! ";
		_energy_pts--;
	}
	else
		std::cout << "The Fragrtrap is DEAD" << std::endl;
}
