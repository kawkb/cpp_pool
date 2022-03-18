#ifndef FORM_H
#define FORM_H
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
    const std::string   m_name;
    bool                m_signed;
    const int          m_SignGrade;
    const int          m_ExecuteGrade;

public:

    std::string         getName(void) const;
    bool                getSigned(void) const;
    int                 getSignGrade(void) const;
    int                 getExecuteGrade(void) const;
    void                beSigned(Bureaucrat &cp);
    Form                &operator=(const Form &cp);
                        Form(const std::string name, const int SignGrade, const int ExecuteGrade);
                        Form(const Form &cp);
                        Form(void);
                        ~Form();
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
        class FormAlreadySignedException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };

};
std::ostream        &operator<<(std::ostream& out, const Form &cp);

#endif