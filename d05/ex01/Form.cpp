#include "Form.hpp"

Form::~Form(void)
{
}

Form::Form(void) : m_name(""), m_signed(false), m_SignGrade(1), m_ExecuteGrade(1)
{
}

Form::Form(const Form& cp): m_name(cp.m_name), m_signed(cp.m_SignGrade), m_SignGrade(cp.m_SignGrade), m_ExecuteGrade(cp.m_ExecuteGrade)
{
}

Form::Form(std::string name, int SignGrade, int ExecuteGrade) : m_name(name), m_SignGrade(SignGrade), m_ExecuteGrade(ExecuteGrade)
{
    m_signed = false;
    if (m_SignGrade > 150 || m_ExecuteGrade > 150)
        throw GradeTooLowException();
    if (m_SignGrade < 1 || m_ExecuteGrade < 1)
        throw GradeTooHighException();
}

Form  &Form::operator=(const Form &cp)
{
    m_signed = cp.m_signed;
    return (*this);
}

void    Form::beSigned(Bureaucrat &cp)
{
    if (cp.getGrade() > m_SignGrade)
        throw GradeTooLowException();
    if (m_signed == true)
        throw FormAlreadySignedException();
    m_signed = true;
}   

int Form::getExecuteGrade(void) const
{
    return (m_ExecuteGrade);
}

std::string   Form::getName(void) const
{
    return (m_name);
}

bool                Form::getSigned(void) const
{
    return (m_signed);
}

int           Form::getSignGrade(void) const
{
    return (m_SignGrade);
}

const char*         Form::GradeTooHighException::what() const throw()
{
    return ("GRADE TOO HIGH");
}

const char*         Form::GradeTooLowException::what() const throw()
{
    return ("GRADE TOO LOW");
}

const char*         Form::FormAlreadySignedException::what() const throw()
{
    return ("FORM ALREADY SIGNED");
}

std::ostream        &operator<<(std::ostream& out, const Form &cp)
{
    out << "Form Name : " << cp.getName() << std::endl 
    << "Form is Signed : " << cp.getSigned() << std::endl
    << "Form Signing Grade :" << cp.getSignGrade() << std::endl
    << "Form Execution Grade " << cp.getExecuteGrade() << std::endl;
    return (out);
}