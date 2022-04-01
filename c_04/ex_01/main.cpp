# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
    const Animal* j[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            j[i] = new Dog();
        else
            j[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        delete j[i];//should not create a leak
    }
    return 0;
}
