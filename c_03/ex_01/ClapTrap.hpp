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
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ~ClapTrap();
    int getAttackDmg() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
	ClapTrap& operator = (const ClapTrap& rhs);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif