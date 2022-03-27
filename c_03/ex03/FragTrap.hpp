#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
protected:
    int _hp;
    int _ep;
    int _ad;
    int _m_hp;
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& rhs);
    ~FragTrap(void);
    void highFivesGuys();
};




#endif