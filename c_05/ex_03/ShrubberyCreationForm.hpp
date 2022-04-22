#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name, std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator = (ShrubberyCreationForm& rhs);
    virtual void action() const;
    virtual void execute(Bureaucrat const & executor) const;

private:
    std::string _target;
};

#endif