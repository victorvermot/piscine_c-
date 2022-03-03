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

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap(std::string name);
    ~FragTrap(void);
    void highFivesGuys();
};




#endif