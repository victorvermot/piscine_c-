#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{

public:
    void announce();
    void setName(std::string new_name);

    Zombie(void);
    ~Zombie(void);

private:
    std::string _name;
};

Zombie* zombieHorde( int, std::string );

#endif