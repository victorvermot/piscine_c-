class Form;
#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <Bureaucrat.hpp>

class Form
{
public:
    Form();
    Form(std::string name, int grade_sign, int grade_exe);
    ~Form();
    std::string getName() const;
    bool getIsSigned() const;
    void setIsSigned(bool result);
    void beSigned(const Bureaucrat worker);
    int  getGradeToSigne() const;
    int  getGradeToExe() const;

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
    bool    _isSigned;
    int     _grade_to_sign;
    int     _grade_to_exe;
};

std::ostream& operator << (std::ostream& os, Form const & rhs);

#endif