#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:
    Cat();
    Cat(const Cat& other);
    ~Cat();

    Cat& operator = (const Cat& other);

    void makeSound() const;
    Brain *cerveau;
};

#endif