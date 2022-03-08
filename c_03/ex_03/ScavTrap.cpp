#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _ad(AD), _hp(HP), _ep(EP), _mhp(HP), _n(name)
{
	_name = name;
	_hitpoints = _hp;
	_energy_pts = _ep;
	_max_hp = _mhp;
	std::cout << "ScavTrap string constructor called" << std::endl;
	std::cout << name << std::endl;
	std::cout << _hp << std::endl;
	std::cout << _ep << std::endl;
	std::cout << _ad << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	_name = other.getName();
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void ScavTrap::guardGate(void)
{
	if (_hitpoints && _energy_pts)
	{
		std::cout << "Scavtrap " << _n << " has entered gatekeeping mode ! ";
		_energy_pts--;
	}
	else
		std::cout << "The Fragrtrap is DEAD" << std::endl;
}
