#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
public:

    Animal();
    virtual ~Animal();
    Animal(std::string name);
    Animal(Animal& other);
    virtual void makeSound() const;
    std::string    getType() const;
    Animal& operator = (const Animal& rhs);

protected:
    std::string type;
};

#endif