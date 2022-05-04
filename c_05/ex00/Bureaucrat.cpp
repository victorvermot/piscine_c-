#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor called" << std::endl;
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
	std::cout << "New bureaucrat registered: " << *this << std::endl;
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

Bureaucrat::~Bureaucrat()
{
	return ;
}

void Bureaucrat::promotion()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighExceptions();
    else
    {
        this->_grade -= 1;
        std::cout << "Good news, you got promoted. Your new rank is now " << _grade << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighExceptions::what() const throw()
{
	return ("Exception: The grade value is too high");
}

const char* Bureaucrat::GradeTooLowExceptions::what() const throw()
{
	return ("Exception: The grade value is too low");
}

void Bureaucrat::demotion()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowExceptions();
    else
    {
        this->_grade += 1;
        std::cout << "Bad news, you got demoted. Your new rank is now " << _grade << std::endl;
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
