#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : Form("RobotomyRequestForm", 72, 45, form.getTarget()) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	setTarget(other.getTarget());
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!isSigned())
	{
		std::cout << "can not execute not signed form" << std::endl;
		return ;
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		std::cout << "* drilling noises *" << std::endl;
		std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
		srand((unsigned) time(0));
		if (rand() % 2)
			std::cout << this->getTarget() << " has been robotomized" << std::endl;
		else
			std::cout << "robotomy failed" << std::endl;
	}
	else
		throw GradeTooLowException();
}