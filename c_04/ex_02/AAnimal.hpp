#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define WHITE "\033[0m"


class AAnimal
{
public:

    AAnimal();
    virtual ~AAnimal();
    AAnimal(std::string name);
    AAnimal(AAnimal& other);
    virtual void makeSound() const = 0;
    std::string    getType() const;
    AAnimal& operator = (const AAnimal& rhs);

protected:
    std::string type;
};

#endif