#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat
{
    private:
        const std::string   m_name;
        int                 m_grade;    

    public:
        int                 getGrade(void) const;
        std::string         getName(void) const;
        void                decrement(void);
        void                increment(void);
        void                signForm(Form &cp);
        Bureaucrat          &operator=(const Bureaucrat &cp);
                            Bureaucrat(std::string name, int grade);
                            Bureaucrat(const Bureaucrat &cp);
                            Bureaucrat(void);
                            ~Bureaucrat();
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
std::ostream        &operator<<(std::ostream& out, const Bureaucrat &cp);

#endif