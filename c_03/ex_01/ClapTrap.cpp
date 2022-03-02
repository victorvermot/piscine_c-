#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string & target)
{
	if (_energy_pts && _hitpoints)
	{
		std::cout << "Claptrap " << this->_name << "attacks" << target << "dealing "
		<< this->_attack_dmg << "points of dmg" << std::endl;
		_energy_pts--;
	}
	else
		std::cout << "Not enough energy to do this action" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy_pts && _hitpoints)
	{
		std::cout << "Claptrap " << this->_name << "takes" << amount << "damage" << std::endl;
		_energy_pts--;
		_hitpoints -= amount;
	}
	else
		std::cout << "Not enough energy to do this action" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_pts && _hitpoints)
	{
		std::cout << "Claptrap " << this->_name << "heals itself for " << amount << "hp." << std::endl;
		_energy_pts--;
		_hitpoints += amount;
	}
	else
		std::cout << "Not enough energy to do this action" << std::endl;
}
