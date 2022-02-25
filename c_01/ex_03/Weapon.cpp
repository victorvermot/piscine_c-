#include "Weapon.hpp"

Weapon::Weapon(std::string t) : _type(t)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void    Weapon::setType(std::string str)
{
	_type = str;
}

std::string const &Weapon::getType(void) const
{
	return (_type);
}
