#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <AForm.hpp>
# include <RobotomyRequestForm.hpp>
# include <PresidentialPardonForm.hpp>
# include <ShrubberyCreationForm.hpp>

class Intern
{
public:
    Intern();
    ~Intern();
    AForm *makeForm(std::string name, std::string target);
private:
    std::string _ft_to_upper(std::string str);
    class NoNameExceptions : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("The name provided is not valid");
            }
    };
};

typedef void (AForm::*my_function)(std::string target);

#endif