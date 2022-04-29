#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>


class AAnimal
{
public:

    AAnimal();
    virtual ~AAnimal();
    AAnimal(AAnimal& other);
    virtual void makeSound() const = 0;
    std::string    getType() const;
    AAnimal& operator = (const AAnimal& rhs);

protected:
    std::string type;
};

#endif