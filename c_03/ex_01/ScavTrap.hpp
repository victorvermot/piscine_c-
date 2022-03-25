#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& rhs);
    ~ScavTrap(void);
    void guardGate();
};




#endif