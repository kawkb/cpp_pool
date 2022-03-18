#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5)
{
    m_target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
    m_target = target;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cp):Form(cp)
{
    m_target = cp.m_target;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(const PresidentialPardonForm &cp)
{
    m_target = cp.m_target;
    return(*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
    if (this->getSigned() == false)
        throw FormNotSignedException();
    std::cout << m_target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}