#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("default", 72, 45), _target(target)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other)
{
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (RobotomyRequestForm& rhs)
{
    if (this != &rhs)
    {
        this->setGradeToSigne(rhs.getGradeToSigne());
        this->setGradeToExe(rhs.getGradeToExe());
        this->setIsSigned(rhs.getIsSigned());
    }
    return (*this);
}

void RobotomyRequestForm::action() const
{
    std::srand(std::time(nullptr));
    int random_variable = std::rand();
    std::cout << "*** Makes drill noises ***" << std::endl;
    if (random_variable % 2)
        std::cout << _target << " has been succesfully robotized." << std::endl;
    else
        std::cout << "The operation to robotized " << _target << " has failed." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExe())
		throw AForm::GradeTooLowExceptions();
	else if (this->getIsSigned() == 0)
		throw AForm::FormNotSignedException();
	this->action();
}