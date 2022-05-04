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

void Bureaucrat::signForm(AForm& formulario)
{
	if (!formulario.getIsSigned() && this->getGrade() <= formulario.getGradeToSigne())
	{
		std::cout << this->getName() << " signed " << formulario.getName() << std::endl;
		formulario.setIsSigned(true);
	}
	else if (this->getGrade() > formulario.getGradeToSigne())
	{
		std::cerr << this->getName() << " couldn't sign " << formulario.getName()
				  << " because their grade is too low." << std::endl;
	}
	else
	{
		std::cerr << this->getName() << " couldn't sign " << formulario.getName()
				  << " because the form is already signed." << std::endl;
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

const char* Bureaucrat::GradeTooHighExceptions::what() const throw()
{
	return ("Exception: The grade value is too high");
}

const char* Bureaucrat::GradeTooLowExceptions::what() const throw()
{
	return ("Exception: The grade value is too low");
}

void Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
	std::cout << _name << " executed " << form.getName() << std::endl;
}
