#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern i;
		Bureaucrat b("allah", 1);
		Form *f = i.makeForm("presidential pardon", "bot");
		b.signForm(*f);
		b.executeForm(*f);

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}