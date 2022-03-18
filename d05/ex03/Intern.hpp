#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Intern
{
    typedef Form *(Intern::*formptr)(std::string);
    public:
    Form    *makeForm(std::string formName, std::string formTarget);
    Form    *makeShrubberyCreationForm(std::string formTarget);
    Form    *makeRobotomyRequestForm(std::string formTarget);
    Form    *makePresidentialPardonForm(std::string formTarget);
    Intern  &operator=(const  Intern &cp);
            Intern(const Intern &cp);
            Intern(void);
            ~Intern();
    class   FormNotFoundException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};
#endif