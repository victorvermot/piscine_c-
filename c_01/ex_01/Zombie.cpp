#include "Zombie.hpp"

Zombie::Zombie()
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

void Zombie::setName(std::string new_name)
{
    this->_name = new_name;
}
