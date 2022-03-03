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
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    ~FragTrap(void);
    void highFivesGuys();
};




#endif