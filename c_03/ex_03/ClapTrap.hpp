#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

# define HP 10
# define EP 10
# define AD 0

class ClapTrap
{
protected:
    std::string _name;
    int _hitpoints;
    int _energy_pts;
    int _attack_dmg;
    int _max_hp;
public:

    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap(std::string name, int hp, int ep, int ad);
    ClapTrap();
    ~ClapTrap();
    int getAttackDmg() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    std::string getName() const;
    virtual void attack(const std::string& target);
    ClapTrap& operator = (const ClapTrap& rhs);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};


#endif