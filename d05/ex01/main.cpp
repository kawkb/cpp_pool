#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	try
	{
		Bureaucrat b("kawkab", 12);
		Form    form("form", 3, 3);
		b.signForm(form);
		b.signForm(form);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
