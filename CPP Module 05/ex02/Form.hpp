#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;
	std::string _target;
protected:
	void setTarget(std::string target);
public:
	Form();
	Form(const Form &other);
	Form(std::string name, int gradeToSign, int gradeToExecute, std::string target);
	virtual ~Form();

	const std::string getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool beSigned(Bureaucrat &bureaucrat);
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &executor) const = 0;


	Form &operator=(const Form &other);

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &form);
