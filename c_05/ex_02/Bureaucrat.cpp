#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
	try
	{
		if (grade < 1)
			throw  Bureaucrat::GradeTooLowExceptions();
		else if (grade > 150)
			throw  Bureaucrat::GradeTooHighExceptions();
		else
			_grade = grade;
	}
	catch(const Bureaucrat::GradeTooLowExceptions& e)
	{
		std::cerr << e.what() << std::endl;
		_grade = 0;
	}
	catch(const Bureaucrat::GradeTooHighExceptions& e)
	{
		std::cerr << e.what() << std::endl;
		_grade = 0;
	}
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
	// formulario.beSigned(*this);
	if (!formulario.getIsSigned() && this->getGrade() <= formulario.getGradeToSigne())
	{
		std::cout << this->getName() << " signed " << formulario.getName() << std::endl;
		formulario.setIsSigned(true);
	}
	else
	{
		std::cerr << this->getName() << " couldn't sign " << formulario.getName()
		<< " because its level is too low." << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

void Bureaucrat::promotion()
{
	try
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighExceptions();

		else
			this->_grade -= 1;
	}
	catch(Bureaucrat::GradeTooHighExceptions& e)
	{
		std::cerr << "You can't get higher." << std::endl;
	}
}

void Bureaucrat::demotion()
{
	try
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowExceptions();
		else
			this->_grade += 1;
	}
	catch(Bureaucrat::GradeTooLowExceptions& e)
	{
		std::cerr << "You can't get lower." << std::endl;
	}
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
