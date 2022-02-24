#include "Zombie.hpp"

Zombie::Zombie(std::string n) : _name(n)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " is dead ... maybe ?" << std::endl;
    return ;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
