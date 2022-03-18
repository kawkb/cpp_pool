#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
{
    private:
        std::string m_target;
    public:
        void                    execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &cp);
                                ShrubberyCreationForm(const ShrubberyCreationForm& cp);
                                ShrubberyCreationForm(std::string target);
                                ShrubberyCreationForm(void);
                                ~ShrubberyCreationForm();
};

#endif