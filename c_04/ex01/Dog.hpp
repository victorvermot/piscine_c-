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
    Dog(Dog& other);

    Dog& operator = (Dog& rhs);

    void makeSound() const;
    Brain *cerveau;
};

#endif
