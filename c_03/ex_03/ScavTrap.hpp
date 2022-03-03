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

class ScavTrap : virtual public ClapTrap
{
private:
    // std::string _name;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap(void);
    // ScavTrap& operator = (const ScavTrap& rhs);
    // std::string getName() const;
    void guardGate();
};

#endif