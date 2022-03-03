#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap& other);
    ~DiamondTrap();
    virtual void attack(const std::string& target);
    void whoAmI();
};

#endif