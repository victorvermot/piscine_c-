#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
protected:
    int _hp;
    int _ep;
    int _ad;
    int _m_hp;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& rhs);
    ~ScavTrap(void);
    void guardGate();
};




#endif