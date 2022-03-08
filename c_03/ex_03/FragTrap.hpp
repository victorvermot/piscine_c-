#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

# undef HP
# define HP 100
# undef EP
# define EP 100
# undef AD
# define AD 30

class FragTrap : virtual public ClapTrap
{
protected:
    int _ad;
    int _hp;
    int _ep;
    int _mhp;
    std::string _n;
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    ~FragTrap(void);
    void highFivesGuys();
    // virtual void attack(const std::string& target);
};

#endif