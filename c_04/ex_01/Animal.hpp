#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define WHITE "\033[0m"


class Animal
{
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    Animal(Animal& other);

    Animal& operator = (const Animal& rhs);

    virtual void makeSound() const;
    std::string    getType() const;
};

#endif