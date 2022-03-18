#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("kawkab", 1);
		std::cout << b << std::endl;
		b.decrement();
		std::cout << b << std::endl;
		b.increment();
		b.increment();
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
