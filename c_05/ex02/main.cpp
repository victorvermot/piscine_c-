# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat Boss(5, "Boss");
		ShrubberyCreationForm shrub("form01", "Lol");
		RobotomyRequestForm lol("form43B", "Robot Bernard");
    	PresidentialPardonForm presi("form789P", "Presi Bernard");
		lol.beSigned(Boss);
		Boss.signForm(shrub);
		Boss.signForm(presi);
		Boss.executeForm(lol);
		Boss.executeForm(presi);
		shrub.execute(Boss);
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat Boss(5, "Boss");
		ShrubberyCreationForm shrub("form01", "Shrub Bernard");
		shrub.execute(Boss);
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try {
    	Bureaucrat Larbin(150, "Larbin");
		ShrubberyCreationForm shrub("form01", "Shrub Bernard");
		Larbin.signForm(shrub);
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}
