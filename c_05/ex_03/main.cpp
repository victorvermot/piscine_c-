# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

// TODO More tests for this one and check if exception class can have code in .hpp files
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
