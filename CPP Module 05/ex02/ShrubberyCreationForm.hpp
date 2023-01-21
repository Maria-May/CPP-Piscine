#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	virtual void execute(Bureaucrat const &executor) const;
};
