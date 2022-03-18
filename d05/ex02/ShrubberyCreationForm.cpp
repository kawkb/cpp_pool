#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137)
{
    m_target = "";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
    m_target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cp):Form(cp)
{
    m_target = cp.m_target;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cp)
{
    m_target = cp.m_target;
    return(*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
    if (this->getSigned() == false)
        throw FormNotSignedException();
    std::ofstream myFile;
    myFile.open(m_target+"_shrubbery");
    myFile << "                         _-_                              _-_          "  << std::endl;
    myFile << "                      /~~   ~~\\                       /~~   ~~\\       "  << std::endl;
    myFile << "                   /~~         ~~\\                 /~~         ~~\\    "  << std::endl;
    myFile << "                  {               }                {               }   "  << std::endl;
    myFile << "                   \\  _-     -_  /                 \\  _-     -_  /    "  << std::endl;
    myFile << "                     ~  \\   //  ~                     ~ \\   //  ~      "  << std::endl;
    myFile << "                  _- -   | | _- _                  _- -   | | _- _     "  << std::endl;
    myFile << "                    _ -  | |   -_                    _ -  | |   -_     "  << std::endl;
    myFile << "                         // \\                            // \\         "  << std::endl;
    myFile << "         _-_                            _-_                            _-_            "  << std::endl;
    myFile << "      /~~   ~~\\                     /~~   ~~\\                     /~~   ~~\\    "  << std::endl;
    myFile << "   /~~         ~~\\               /~~         ~~\\               /~~         ~~\\ "  << std::endl;
    myFile << "  {               }              {               }              {               }"  << std::endl;
    myFile << "   \\  _-     -_  /               \\  _-     -_  /               \\  _-     -_  / "  << std::endl;
    myFile << "     ~  \\  //  ~                    ~  \\ //  ~                    ~  \\ //  ~   "  << std::endl;
    myFile << "  _- -   | | _- _                _- -   | | _- _                _- -   | | _- _  "  << std::endl;
    myFile << "    _ -  | |   -_                  _ -  | |   -_                  _ -  | |   -_  "  << std::endl;
    myFile << "         // \\                          // \\                          // \\      "  << std::endl;
    myFile << "                        _-_                              _-_          "  << std::endl;
    myFile << "                     /~~   ~~\\                       /~~   ~~\\       "  << std::endl;
    myFile << "                  /~~         ~~\\                 /~~         ~~\\    "  << std::endl;
    myFile << "                 {               }                {               }   "  << std::endl;
    myFile << "                  \\  _-     -_  /                 \\  _-     -_  /    "  << std::endl;
    myFile << "                    ~  \\ //  ~                      ~  \\ //  ~      "  << std::endl;
    myFile << "                 _- -   | | _- _                  _- -   | | _- _     "  << std::endl;
    myFile << "                   _ -  | |   -_                    _ -  | |   -_     "  << std::endl;
    myFile << "                        // \\                            // \\         "  << std::endl;
    myFile.close();
}
