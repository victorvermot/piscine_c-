#ifndef CLAPTRAP_H
# define CLAPTRAP

# include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int _hitpoints;
    int _energy_pts;
    int _attack_dmg;
public:

    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};




#endif