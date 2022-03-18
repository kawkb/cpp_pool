#ifndef ROBOTOMYREQUEST_HPP
#define ROBOTOMYREQUEST_HPP
#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
    private:
        std::string m_target;
    public:
        void                    execute(Bureaucrat const & executor) const;
        RobotomyRequestForm     &operator=(const RobotomyRequestForm &cp);
                                RobotomyRequestForm(const RobotomyRequestForm& cp);
                                RobotomyRequestForm(std::string target);
                                RobotomyRequestForm(void);
                                ~RobotomyRequestForm();
};
#endif