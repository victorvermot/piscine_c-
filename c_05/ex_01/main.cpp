#include "Bureaucrat.hpp"

int main()
{
    try
    {
		std::cout << std::boolalpha;
        Form form_42("Tchic", 25, 48);
		Bureaucrat thierry(5, "Thierry");
		Bureaucrat jason(123, "Jason");
		thierry.signForm(form_42);
		jason.signForm(form_42);
    	std::cout << form_42;
    }
    catch(const Form::GradeTooHighExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Form::GradeTooLowExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooHighExceptions& e)
	{
        std::cerr << e.what() << std::endl;
	}
    catch(const Bureaucrat::GradeTooLowExceptions& e)
	{
        std::cerr << e.what() << std::endl;
	}
}

