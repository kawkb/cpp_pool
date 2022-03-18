#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45)
{
    m_target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
    m_target = target;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cp):Form(cp)
{
    m_target = cp.m_target;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &cp)
{
    m_target = cp.m_target;
    return(*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(NULL));
   int i = rand() % 2;
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
    if (this->getSigned() == false)
        throw FormNotSignedException();
    if ( i == 1)
        std::cout << "Vroom Vroom Vroom" << std::endl << m_target << " has been robotomized successfully " << std::endl; 
    else if (!i)
        std::cout << "the robotomy failed" << std::endl;
}