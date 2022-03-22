#include "Intern.hpp"

Intern::Intern()
{
    return ;
}

Intern::~Intern()
{
    return ;
}

std::string	Intern::_ft_to_upper(std::string str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}


AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string names[] = {"ROBOTOMY REQUEST", "PRESIDENTIAL PARDON FORM", "SHRUBBERY CREATION FORM"};
    int   which_form;
    AForm *ret;

    ret = NULL;
    for (int i = 0; i < 3; i++)
    {
        if (names[i] == _ft_to_upper(name))
            which_form = i;
    }
    try
    {
        switch (which_form)
        {
        case 0:
            ret = new RobotomyRequestForm(target);
            break;
        case 1:
            ret = new PresidentialPardonForm(target);
            break;
        case 2:
            ret = new ShrubberyCreationForm(target);
            break;
        default:
            throw Intern::NoNameExceptions();
            break;
        }
    }
    catch (Intern::NoNameExceptions& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (ret);
}
