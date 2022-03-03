#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

# undef HP
# define HP 100
# undef EP
# define EP 50
# undef AD
# define AD 20

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