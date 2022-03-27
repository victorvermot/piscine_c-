#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_pts(10), _attack_dmg(0), _max_hp(10)
{
	std::cout << "ClapTrap string constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad) : _name(name), _hitpoints(hp), _energy_pts(ep), _attack_dmg(ad), _max_hp(hp)
{
	std::cout << "ClapTrap ultimate constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
	
}

ClapTrap& ClapTrap::operator = (const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = 
		this->_attack_dmg = rhs.getAttackDmg();
		this->_hitpoints = rhs.getHitPoints();
		this->_energy_pts = rhs.getEnergyPoints();
		this->_max_hp = rhs.getMaxHp();
	}
	return (*this);
}

int ClapTrap::getAttackDmg() const
{
	return (_attack_dmg);
}

int ClapTrap::getHitPoints() const
{
	return (_hitpoints);
}

int ClapTrap::getMaxHp() const
{
	return (_max_hp);
}

int ClapTrap::getEnergyPoints() const
{
	return (_energy_pts);
}

std::string ClapTrap::getName() const
{
	return (_name);
}

void ClapTrap::attack(const std::string & target)
{
	if (_energy_pts && _hitpoints)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target << " dealing "
		<< this->_attack_dmg << " points of dmg" << std::endl;
		_energy_pts--;
	}
	else
		std::cout << "Not enough energy to do this action" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy_pts && _hitpoints)
	{
		std::cout << "Claptrap " << this->_name << " takes " << amount << " damage " << std::endl;
		_energy_pts--;
		_hitpoints -= amount;
		if (_hitpoints < 0)
			_hitpoints = 0;
		std::cout << "Claptrap " << this->_name << " has now " << _hitpoints << " hp." << std::endl;
	}
	else
		std::cout << "Not enough energy to do this action" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_pts && _hitpoints)
	{
		std::cout << "Claptrap " << this->_name << " heals itself for " << amount << " hp." << std::endl;
		_energy_pts--;
		_hitpoints += amount;
		if (_hitpoints > _max_hp)
			_hitpoints = _max_hp;
		std::cout << "Claptrap " << this->_name << " has now " << _hitpoints << " hp." << std::endl;
	}
	else
		std::cout << "Not enough energy to do this action" << std::endl;
}
