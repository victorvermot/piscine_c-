#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = HP;
	_energy_pts = EP;
	_attack_dmg = AD;

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
	if (_hitpoints && _energy_pts)
	{
		std::cout << "Scavtrap " << _name << " has entered gatekeeping mode ! ";
		_energy_pts--;
	}
	else
		std::cout << "The Fragrtrap is DEAD" << std::endl;
}
