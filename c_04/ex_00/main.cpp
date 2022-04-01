# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* l = new WrongCat();

    std::cout << "I am an animal of type : " << j->getType() << std::endl;
    std::cout << "I make the following sound : ";
    j->makeSound();
    std::cout << "I am an animal of type : " << i->getType() << std::endl;
    std::cout << "I make the following sound : ";
    i->makeSound();
    std::cout << "I am an animal of type : " << l->getType() << std::endl;
    std::cout << "I make the following sound : ";
    l->makeSound();
    std::cout << "I am an animal of type : " << meta->getType() << std::endl;
    std::cout << "I make the following sound : ";
    meta->makeSound();
    delete(j);
    delete(i);
    delete(l);
    delete(meta);
    return 0;
}
