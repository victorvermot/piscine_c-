# include "AAnimal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
    const AAnimal* j[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 6)
            j[i] = new Dog();
        else
            j[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        delete j[i];
    }
    return 0;
}
