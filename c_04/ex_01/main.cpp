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
	std::cout << "----------------------------------------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        delete j[i];
    }
    return 0;
}
