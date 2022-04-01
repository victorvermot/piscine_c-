#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& other);
    ~Cat();

    Cat& operator = (const Cat& rhs);

    void makeSound() const;
};

#endif