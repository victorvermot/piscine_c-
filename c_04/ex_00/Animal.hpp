#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
public:

    Animal();
    virtual ~Animal();
    Animal(std::string name);
    virtual void makeSound() const;
    std::string    getType() const;

protected:
    std::string type;
};

#endif