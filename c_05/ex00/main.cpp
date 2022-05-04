#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Richard(42, "Richard");
        Richard.demotion();
        Richard.demotion();
		Richard.promotion();
        std::cout << Richard << std::endl;
        Bureaucrat Bertrand(-42, "Bertrand");
    }
    catch(Bureaucrat::GradeTooHighExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }

}
