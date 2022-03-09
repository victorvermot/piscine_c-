#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Form form_42("Tchic", 25, 48);
    Bureaucrat thierry(5, "Thierry");
    thierry.signForm(form_42);
    std::cout << form_42;
}
