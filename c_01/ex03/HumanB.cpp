#include "HumanB.hpp"

HumanB::HumanB(std::string n) : _name(n)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void    HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}
