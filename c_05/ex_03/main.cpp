# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	AForm* rrf;
	Intern someRandomIntern;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request du cul", "Bender");
		rrf->action();
		delete rrf;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
