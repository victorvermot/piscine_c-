#include "Intern.hpp"

Intern::Intern()
{
    return ;
}

Intern::Intern(const Intern& other)
{
	*this = other;
	return ;
}

Intern& Intern::operator=(const Intern &rhs)
{
	return (*this);
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
	t_forms forms[FORMS_NUM] = {
			{"ROBOTOMY REQUEST", new RobotomyRequestForm(name, target)},
			{"PRESIDENTIAL PARDON", new PresidentialPardonForm(name, target)},
			{"SHRUBBERY CREATION", new RobotomyRequestForm(name, target)},
	};
    AForm *ret;
    ret = NULL;
    for (int i = 0; i < FORMS_NUM; i++)
    {
        if (forms[i].name == _ft_to_upper(name))
            ret = forms[i].form;
		else
			delete forms[i].form;
    }
	if (!ret)
		throw Intern::NoNameExceptions();
	std::cout << "Intern created " << name << " form." << std::endl;
    return (ret);
}
