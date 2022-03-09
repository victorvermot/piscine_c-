#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("default", 72, 45), _target(target)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other)
{
    *this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (PresidentialPardonForm& rhs)
{
    if (this != &rhs)
    {
        this->setGradeToSigne(rhs.getGradeToSigne());
        this->setGradeToExe(rhs.getGradeToExe());
        this->setIsSigned(rhs.getIsSigned());
    }
    return (*this);
}

void PresidentialPardonForm::action() const
{
    std::cout << _target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeToExe() <= executor.getGrade() && this->getIsSigned() == 1)
        this->action();
}