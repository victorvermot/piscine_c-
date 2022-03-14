#ifndef PresidentialPardonForm_H
# define PresidentialPardonForm_H

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(PresidentialPardonForm& other);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator = (PresidentialPardonForm& rhs);
    virtual void action() const;
    void execute(Bureaucrat const & executor) const;

private:
    std::string _target;
};

#endif