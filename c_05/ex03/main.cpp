# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	AForm* rrf;
	AForm* pres_form;
	AForm* shrub_form;
	Intern someRandomIntern;
	Bureaucrat Boss(2, "Michel");

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		pres_form = someRandomIntern.makeForm("presidential pardon", "Bender");
		shrub_form = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->action();
		Boss.signForm(*shrub_form);
		shrub_form->execute(Boss);
		delete rrf;
		delete shrub_form;
		pres_form->execute(Boss);
		rrf = someRandomIntern.makeForm("robotomy request tabernaque", "Bender");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete pres_form;
	}
}
