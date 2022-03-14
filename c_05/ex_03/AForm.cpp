#include "AForm.hpp"

AForm::AForm()
{
    return ;
}

AForm::~AForm()
{
    return ;
}

AForm::AForm(std::string name, int grade_sign, int grade_exe) : _name(name)
{
    try
    {
        if (grade_exe > 150 || grade_sign > 150)
            throw AForm::GradeTooHighExceptions();
        if (grade_exe < 1 || grade_sign < 1)
            throw AForm::GradeTooLowExceptions();
        else
        {
            _grade_to_exe = grade_exe;
            _grade_to_sign = grade_sign;
            _isSigned = 0;
        }
    }
    catch(const AForm::GradeTooHighExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const AForm::GradeTooLowExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int  AForm::getGradeToSigne() const
{
    return (this->_grade_to_sign);
}

void AForm::beSigned(const Bureaucrat worker)
{
    try
    {
        if (worker.getGrade() <= this->getGradeToSigne())
        {
            std::cout << "The form is now signed." << std::endl;
            this->_isSigned = 1;
        }
        else
        {
            throw AForm::GradeTooLowExceptions();
        }
    }
    catch(const AForm::GradeTooLowExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void AForm::setIsSigned(bool result)
{
    this->_isSigned = result;
}

int  AForm::getGradeToExe() const
{
    return (this->_grade_to_exe);
}

std::string  AForm::getName() const
{
    return (this->_name);
}

bool  AForm::getIsSigned() const
{
    return (this->_isSigned);
}

void AForm::setGradeToSigne(int new_grade)
{
    this->_grade_to_sign = new_grade;
}

void AForm::setGradeToExe(int new_grade)
{
    this->_grade_to_exe = new_grade;
}

std::ostream& operator << (std::ostream& os, AForm const & rhs)
{
    os << "Le formulaire : " <<  rhs.getName() << std::endl
    << "Etat de la signature : " << rhs.getIsSigned() << std::endl
    << "Minimum pour signer : " << rhs.getGradeToSigne() << std::endl
    << "Minimum pour exe : " << rhs.getGradeToExe() << std::endl;
    return (os);
}
