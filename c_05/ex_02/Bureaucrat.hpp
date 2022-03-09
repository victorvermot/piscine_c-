class Bureaucrat;
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <AForm.hpp>

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

    class GradeTooHighExceptions
    {
        public:
            virtual const char* what() const throw()
            {
                return ("The value provided is too high");
            }
    };

    class GradeTooLowExceptions
    {
        public:
            virtual const char* what() const throw()
            {
                return ("The value provided is too low");
            }
    };

private:
    const std::string _name;
    unsigned int _grade;
};

std::ostream& operator << (std::ostream& os, Bureaucrat const & rhs);

#endif