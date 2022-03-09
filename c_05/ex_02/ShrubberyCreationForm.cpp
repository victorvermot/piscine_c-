#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("default", 145, 137), _target(target)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other)
{
    *this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (ShrubberyCreationForm& rhs)
{
    if (this != &rhs)
    {
        this->setGradeToSigne(rhs.getGradeToSigne());
        this->setGradeToExe(rhs.getGradeToExe());
        this->setIsSigned(rhs.getIsSigned());
    }
    return (*this);
}

void ShrubberyCreationForm::action() const
{
    std::ofstream outfile (_target + "_shrubbery");
    std::string tree =   "        _-_\n     /~~   ~~\\\n  /~~         ~~\\\n {               } \n \\  _-     -_  / \n   ~  \\ //  ~ \n_- -   | | _- _ \n_ -  | |   -_ \n      // \\";
    for (int i = 0; i < 5; i++)
    {
        outfile << tree << std::endl;
    }
    outfile.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeToExe() <= executor.getGrade() && this->getIsSigned() == 1)
        this->action();
}
