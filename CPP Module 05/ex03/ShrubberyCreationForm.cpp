#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form("ShrubberyCreationForm", 145, 137, form.getTarget()) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	setTarget(other.getTarget());
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!isSigned())
	{
		std::cout << "can not execute not signed form" << std::endl;
		return ;
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream	myfile;
		std::string		fileName = getTarget() + "_shrubbery";
		myfile.open(fileName.c_str(), std::ios::out);
		myfile << "            .        +          .      .          .\n"
		<< "     .            _        .                    .\n"
		<< "  ,              /;-._,-.____        ,-----.__\n"
		<< " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
		<< "  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
		<< "                      ,    `./  \\:. `.   )==-'  .\n"
		<< "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
		<< ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
		<< "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
		<< "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
		<< "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
		<< "              \\:  `  X` _| _,\\/'   .-'\n"
		<< ".               \":._:`\\____  /:'  /      .           .\n"
		<< "                    \\::.  :\\/:'  /              +\n"
		<< "   .                 `.:.  /:'  }      .\n"
		<< "           .           ):_(:;   \\           .\n"
		<< "                      /:. _/ ,  |\n"
		<< "                   . (|::.     ,`                  .\n"
		<< "     .                |::.    {\\\n"
		<< "                      |::.\\  \\ `.\n"
		<< "                      |:::(\\    |\n"
		<< "              O       |:::/{ }  |                  (o\n"
		<< "               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
		<< "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
		myfile.close();
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}