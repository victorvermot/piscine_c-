#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:
    Cat();
    ~Cat();
    void makeSound() const;
    Brain *cerveau;
};

#endif