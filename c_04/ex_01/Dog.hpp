#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    void makeSound() const;
    Brain *cerveau;
};

#endif