#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Anonymous"), _grade(150) {
	std::cout << "Bureaucrat is created" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat is destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat is created" << std::endl;
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	_grade = other.getGrade();
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name) {
	std::cout << "Bureaucrat is created" << std::endl;
	*this = other;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "BureaucratException: Grade too Low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "BureaucratException: Grade too High";
}

void Bureaucrat::decrementGrade() {
	if (++_grade > 150)
		throw GradeTooLowException();

}

void Bureaucrat::incrementGrade() {
	if (--_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::signForm(Form &form) {
	if (this->_grade <= form.getGradeToSign())
		std::cout << this->_name << " signs form " << form.getName() << std::endl;
	else
		std::cout << this->_name << " cannot sign form " << form.getName() << " because grade is too low" << std::endl;
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out  << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}