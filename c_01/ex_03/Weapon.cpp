#include "Weapon.hpp"

Weapon::Weapon(void)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

void    Weapon::set_type(std::string str)
{

}

std::string const &Weapon::_get_type(void) const
{
    return this->_type;
}
