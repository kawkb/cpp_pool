#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("simo", 1);
		RobotomyRequestForm r("thedude");
		b.signForm(r);
		b.executeForm(r);
		ShrubberyCreationForm s("thedude");
		b.signForm(s);
		b.executeForm(s);
		PresidentialPardonForm p("thedude");
		b.signForm(p);
		b.executeForm(p);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}