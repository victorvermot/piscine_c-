#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap basic constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _ad(AD), _hp(HP), _ep(EP), _mhp(HP), _n(name)
{
	_name = name;
	_hitpoints = _hp;
	_energy_pts = _ep;
	_max_hp = _mhp;
	std::cout << "FragTrap string constructor called" << std::endl;
	std::cout << name << std::endl;
	std::cout << _hp << std::endl;
	std::cout << _ep << std::endl;
	std::cout << _ad << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitpoints && _energy_pts)
	{
		std::cout << "FragTrap " << _name << " wants to give you a highfive ! ";
		std::cin.ignore();
		_energy_pts--;
	}
	else
		std::cout << "The Fragrtrap is DEAD" << std::endl;
}
