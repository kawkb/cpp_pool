#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(void):m_name("")
{
    std::cout << "Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): m_name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    m_grade = grade;
    std::cout << "Parametrized Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp): m_name(cp.m_name)
{
    std::cout << "Copy Constructor Called" << std::endl;
    m_grade = cp.m_grade;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &cp)
{
    m_grade = cp.m_grade;
    return(*this);
}

const char      *Bureaucrat::Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade Too High");
}

const char      *Bureaucrat::Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade Too Low");
}

int        Bureaucrat::getGrade(void) const
{
    return (m_grade);
}

std::string Bureaucrat::getName(void) const
{
    return(m_name);
}

void     Bureaucrat::increment(void)
{
    if (m_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->m_grade--;
}

void     Bureaucrat::decrement(void)
{
    if (m_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->m_grade++;
}

std::ostream  &operator<<(std::ostream& out, const Bureaucrat &cp)
{
    out << cp.getName() << ", bureaucrat grade " << cp.getGrade();
    return (out);
}

void        Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << m_name << " Signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << m_name << " Could not Sign " << form.getName() << " Because " << e.what() << std::endl;
    }
}

void                Bureaucrat::executeForm(Form const & form)
{
    try
    {
        std::cout << m_name << " executed " << form.getName() << std::endl;
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << m_name << " Could not Sign " << form.getName() << " Because " << e.what() << std::endl;
    }
    
}