class AForm;
#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
	AForm();
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
    AForm(std::string name, int grade_sign, int grade_exe);
    virtual ~AForm();
    std::string getName() const;
    bool getIsSigned() const;
    void beSigned(const Bureaucrat worker);
    int  getGradeToSigne() const;
    int  getGradeToExe() const;

    void setName(std::string name);
    void setIsSigned(bool result);
    void setGradeToSigne(int new_grade);
    void setGradeToExe(int new_grade);
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual void action() const = 0;

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

    class FormNotSignedException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

private:
    const std::string _name;
    bool    _isSigned;
    int     _grade_to_sign;
    int     _grade_to_exe;
};

std::ostream& operator << (std::ostream& os, AForm const & rhs);

#endif