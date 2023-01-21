#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Form			*form = NULL;
	Bureaucrat		bob("Boss of the gym", 1);
	Bureaucrat		phil("Phillip", 40);
	Bureaucrat		luc("Lucas", 150);

	form = new PresidentialPardonForm("Stevie");
	form->execute(bob);
	delete form;
	form = NULL;

	try
	{
		form = new PresidentialPardonForm("Peter Griffin");
		form->beSigned(bob);
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		form = new RobotomyRequestForm("Samurai");
		form->beSigned(bob);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		form = new ShrubberyCreationForm("Edward");
		form->beSigned(bob);
		phil.executeForm(*form);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}