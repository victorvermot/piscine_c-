#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(RobotomyRequestForm& other);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator = (RobotomyRequestForm& rhs);
    virtual void action() const;
    virtual void execute(Bureaucrat const & executor) const;

private:
    std::string _target;
};

#endif