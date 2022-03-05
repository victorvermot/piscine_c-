#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    void makeSound() const;
    Brain *cerveau;
};

#endif