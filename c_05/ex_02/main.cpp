# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat Boss(5, "Boss");
    // ShrubberyCreationForm lol("Bernard");
    // lol.action("test2");

    RobotomyRequestForm lol("Bernard");
    lol.beSigned(Boss);
    Boss.executeForm(lol);
    lol.execute(Boss);

    Bureaucrat Larbin(150, "Larbin");
    PresidentialPardonForm presi("Bernard");
    presi.beSigned(Larbin);
    Larbin.executeForm(lol);
    presi.execute(Boss);
}
