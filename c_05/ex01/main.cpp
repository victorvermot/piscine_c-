#include "Bureaucrat.hpp"

int main()
{
    try
    {
		std::cout << std::boolalpha;
        Form form_42("Tchic", 25, 48);
		Bureaucrat thierry(5, "Thierry");
		Bureaucrat jason(1, "Jason");
		thierry.signForm(form_42);
		jason.signForm(form_42);
    	std::cout << form_42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
