#include "AForm.hpp"

AForm::AForm()
{
	return ;
}

AForm::~AForm()
{
	return ;
}

AForm::AForm(const AForm& other)
{
	*this = other;
}

AForm& AForm::operator = (const AForm& rhs)
{
	if (this != &rhs)
	{
		_isSigned = rhs._isSigned;
		_grade_to_sign = rhs._grade_to_sign;
		_grade_to_exe = rhs._grade_to_exe;
	}
	return (*this);
}

AForm::AForm(std::string name, int grade_sign, int grade_exe) : _name(name)
{
	if (grade_exe > 150 || grade_sign > 150)
		throw AForm::GradeTooHighExceptions();
	if (grade_exe < 1 || grade_sign < 1)
		throw AForm::GradeTooLowExceptions();
	_grade_to_exe = grade_exe;
	_grade_to_sign = grade_sign;
	_isSigned = 0;
}

int  AForm::getGradeToSigne() const
{
	return (this->_grade_to_sign);
}

void AForm::beSigned(const Bureaucrat worker)
{
	if (worker.getGrade() <= this->getGradeToSigne())
	{
		std::cout << "The form is now signed." << std::endl;
		this->_isSigned = 1;
	}
	else
		throw AForm::GradeTooLowExceptions();
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
