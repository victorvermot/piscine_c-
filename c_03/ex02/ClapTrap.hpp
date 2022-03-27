#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int _hitpoints;
    int _energy_pts;
    int _attack_dmg;
    int _max_hp;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap(std::string name, int hp, int ep, int ad);
    ~ClapTrap();
    int getAttackDmg() const;
    std::string getName() const;
    int getMaxHp() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
	ClapTrap& operator = (const ClapTrap& rhs);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif