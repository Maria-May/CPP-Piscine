#include "Intern.hpp"
#include <string>

Intern::Intern() {}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &other) {
	(void)other;
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target) {
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form *returnForms[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	Form *result = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(forms[i]))
		{
			std::cout << "Intern creates " << returnForms[i]->getName() << std::endl;
			result = returnForms[i];
			continue;
		}
		delete returnForms[i];
	}
	if (result)
		return result;
	std::cout << "Intern don't know " << name << std::endl;
	return NULL;
}
