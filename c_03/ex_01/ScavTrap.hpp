#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(std::string name);
    ~ScavTrap(void);
    void guardGate();
};




#endif