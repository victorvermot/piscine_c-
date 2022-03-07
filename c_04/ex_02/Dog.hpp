#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
public:
    Dog();
    ~Dog();
    Dog(Dog& other);
    void makeSound() const;
    Brain *cerveau;
    Dog& operator = (Dog& rhs);
};

#endif