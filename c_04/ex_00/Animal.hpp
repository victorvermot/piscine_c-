#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(std::string name);
    Animal(const Animal& other);
    virtual ~Animal();

    Animal& operator = (const Animal& rhs);

    virtual void makeSound() const;
    std::string    getType() const;

};

#endif