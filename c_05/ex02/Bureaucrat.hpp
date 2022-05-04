#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(int grade, std::string name);
    Bureaucrat(Bureaucrat& other);
    Bureaucrat& operator = (Bureaucrat& rhs);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void signForm(AForm& formulario);
    void promotion();
    void demotion();
    void executeForm(AForm const & form);

    class GradeTooHighExceptions : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowExceptions : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

private:
    const std::string _name;
    unsigned int _grade;
};

std::ostream& operator << (std::ostream& os, Bureaucrat const & rhs);

#endif