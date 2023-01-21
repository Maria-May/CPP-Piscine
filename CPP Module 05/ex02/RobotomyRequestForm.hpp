#pragma once
#include "Form.hpp"
#include <chrono>
#include <thread>

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &form);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	virtual void execute(Bureaucrat const &executor) const;
};
