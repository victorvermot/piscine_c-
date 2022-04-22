# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include "Base.hpp"
# include <cstdlib>
# include <ctime>

Base *generate(void)
{
    Base *ret;
    std::srand(std::time(nullptr));
    int random_variable = std::rand() % 10;
    if (random_variable < 4)
        ret = new A();
    else if (random_variable < 7)
        ret = new B();
    else
        ret = new C();
    return (ret);
}

void identify(Base* p)
{
    A *test_a = dynamic_cast<A *>(p);
    if (test_a)
        std::cout << "p real type is A" << std::endl;
    B *test_b = dynamic_cast<B *>(p);
    if (test_b)
        std::cout << "p real type is B" << std::endl;
    C *test_c = dynamic_cast<C *>(p);
    if (test_c)
        std::cout << "p real type is C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& test_a = dynamic_cast<A&>(p);
		(void)test_a;
        std::cout << "p real type is A" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e) {}
    try
    {
        B& test_b = dynamic_cast<B&>(p);
		(void)test_b;
        std::cout << "p real type is B" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e) {}
    try
    {
        C& test_c = dynamic_cast<C&>(p);
		(void)test_c;
        std::cout << "p real type is C" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e) {}
    std::cout << "Conversion impossible" << std::endl;
}

int main(void)
{
    Base    *test;

    test = generate();
    identify(test);
    identify(*test);
    delete test;
}
