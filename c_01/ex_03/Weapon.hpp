#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
public:

    Weapon(void);
    ~Weapon(void);
    void set_type(std::string);

private:

    std::string _type;
    std::string const &_get_type(void) const;

};

#endif