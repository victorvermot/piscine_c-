#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

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