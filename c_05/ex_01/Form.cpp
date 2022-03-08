#include "Form.hpp"

Form::Form()
{
    return ;
}

Form::~Form()
{
    return ;
}

Form::Form(std::string name, int grade_sign, int grade_exe) : _name(name)
{
    try
    {
        if (grade_exe > 150 || grade_sign > 150)
            throw Form::GradeTooHighExceptions();
        if (grade_exe < 1 || grade_sign < 1)
            throw Form::GradeTooLowExceptions();
        else
        {
            _grade_to_exe = grade_exe;
            _grade_to_sign = grade_sign;
            _isSigned = 0;
        }
    }
    catch(const Form::GradeTooHighExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Form::GradeTooLowExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int  Form::getGradeToSigne() const
{
    return (this->_grade_to_sign);
}

void Form::beSigned(const Bureaucrat worker)
{
    try
    {
        if (worker.getGrade() <= this->getGradeToSigne())
            this->_isSigned = 1;
        else
        {
            throw Form::GradeTooLowExceptions();
        }
    }
    catch(const Form::GradeTooLowExceptions& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

void Form::setIsSigned(bool result)
{
    this->_isSigned = result;
}

int  Form::getGradeToExe() const
{
    return (this->_grade_to_exe);
}

std::string  Form::getName() const
{
    return (this->_name);
}

bool  Form::getIsSigned() const
{
    return (this->_isSigned);
}

std::ostream& operator << (std::ostream& os, Form const & rhs)
{
    os << "Le formulaire : " <<  rhs.getName() << std::endl
    << "Etat de la signature : " << rhs.getIsSigned() << std::endl
    << "Minimum pour signer : " << rhs.getGradeToSigne() << std::endl
    << "Minimum pour exe : " << rhs.getGradeToExe() << std::endl;
    return (os);
}
