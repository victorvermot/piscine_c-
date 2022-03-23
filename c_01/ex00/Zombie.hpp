#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{

public:
    void announce();

    Zombie(std::string n);
    ~Zombie(void);

private:
    std::string _name;
};

#endif