#ifndef PRESEDENTIALPARDONFORM_HPP
#define PRESEDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
    private:
        std::string m_target;
    public:
        void                    execute(Bureaucrat const & executor) const;
        PresidentialPardonForm  &operator=(const PresidentialPardonForm &cp);
                                PresidentialPardonForm(const PresidentialPardonForm& cp);
                                PresidentialPardonForm(std::string target);
                                PresidentialPardonForm(void);
                                ~PresidentialPardonForm(void);
};
#endif