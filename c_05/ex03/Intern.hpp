#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class RobotomyRequestForm;
class PresidentialPardonForm;
class ShrubberyCreationForm;

# define FORMS_NUM 3

typedef struct s_formTypes {
	std::string name;
	AForm *form;
} t_forms;

class Intern
{
public:
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& rhs);
    ~Intern();
    AForm *makeForm(std::string name, std::string target);
private:
    std::string _ft_to_upper(std::string str);
    class NoNameExceptions : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

#endif