# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat Yvan(5, "Yvan");
    std::string test = "test";
    // ShrubberyCreationForm lol("Bernard");
    // lol.action("test2");

    RobotomyRequestForm lol("Bernard");
    lol.beSigned(Yvan);
    lol.execute(Yvan);
}
