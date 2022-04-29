#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(std::string name);
    WrongAnimal(const WrongAnimal& other);
    ~WrongAnimal();

    WrongAnimal& operator = (const WrongAnimal& rhs);

    void makeSound() const;
    std::string getType() const;

};

#endif