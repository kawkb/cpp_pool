#include "Intern.hpp"

Intern::Intern::~Intern()
{
}
Intern::Intern::Intern(void)
{
}
Intern::Intern(const Intern &cp)
{
    *this = cp;
}

Intern  &Intern::operator=(const  Intern &cp)
{
    (void)cp;
    return(*this);
}

Form    *Intern::makeShrubberyCreationForm(std::string target)
{
    Form *ptr = new ShrubberyCreationForm(target);
    return(ptr);
}

Form    *Intern::makeRobotomyRequestForm(std::string target)
{
    Form *ptr = new RobotomyRequestForm(target);
    return(ptr);
}

Form    *Intern::makePresidentialPardonForm(std::string target)
{
    Form *ptr = new PresidentialPardonForm(target);
    return(ptr);
}

const char*         Intern::FormNotFoundException::what() const throw()
{
    return ("FORM NOT FOUND");
}

Form    *Intern::makeForm(std::string formName, std::string formTarget)
{
    formptr formPtr[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
    std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *ptr;
    for(int i = 0; i < 3; i++)
    {
        if (str[i] == formName)
            return(ptr = (this->*formPtr[i])(formTarget));
    }
    throw FormNotFoundException();
    return(NULL);
}
