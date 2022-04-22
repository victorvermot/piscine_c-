#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
    if (grade < 1)
        throw  Bureaucrat::GradeTooLowExceptions();
    else if (grade > 150)
        throw  Bureaucrat::GradeTooHighExceptions();
    else
        _grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat& other)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator = (Bureaucrat& rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

void Bureaucrat::signForm(Form& formulario)
{
	if (!formulario.getIsSigned() && this->getGrade() <= formulario.getGradeToSigne())
	{
		std::cout << this->getName() << " signed " << formulario.getName() << std::endl;
		formulario.setIsSigned(true);
	}
	else
	{
		std::cerr << this->getName() << " couldn't sign " << formulario.getName()
		<< " because their grade is too low." << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

void Bureaucrat::promotion()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighExceptions();
    else
        this->_grade -= 1;
}

void Bureaucrat::demotion()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowExceptions();
    else
        this->_grade += 1;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::ostream& operator << (std::ostream& os, Bureaucrat const & rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}
