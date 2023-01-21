#include "Form.hpp"

Form::Form() : _name("Form"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::~Form() {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute, std::string target) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target) {
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {

}

Form &Form::operator=(const Form &other) {
	this->_isSigned = other._isSigned;
	return *this;
}

const std::string Form::getName() const {
	return _name;
}

int Form::getGradeToExecute() const {
	return _gradeToExecute;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

std::string Form::getTarget() const {
	return this->_target;
}

void Form::setTarget(std::string target) {
	this->_target = target;
}

bool Form::isSigned() const {
	return _isSigned;
}

bool Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		return (this->_isSigned = true);
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw() {
	return "FormException: Grade too Low";
}

const char *Form::GradeTooHighException::what() const throw() {
	return "FormException: Grade too High";
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	if (form.isSigned())
		out  << form.getName() << ", signed form";
	else
		out  << form.getName() << ", not signed form with grade to sign " << form.getGradeToSign() << " and grade to execute " << form.getGradeToExecute();
	return (out);
}