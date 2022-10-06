#include "Contact.hpp"

Contact:: Contact()
{
	this->index = 9;
}

Contact:: ~Contact()
{

}

int	Contact:: checkAndSet(const char *message, std:: string &infoToSet) // checking &
{
	std::cout << message << std::endl;
	std::getline(std::cin, infoToSet);
	if (std::cin.eof() || !infoToSet.length())
	{
		std::cout << "cannot create empty contact" << std::endl;
		this->index = 9;
		return (0);
	}
	return (1);
}

int	Contact:: setContact(id_t index)
{
	this->index = index;
	if(!this->checkAndSet("Enter your first name, pealse", this->firstName))
		return(0);
	if (!this->checkAndSet("Enter your last name, pealse", this->lastName))
		return(0);
	if (!this->checkAndSet("Enter your nickname, pealse", this->nickname))
		return(0);
	if (!this->checkAndSet("Enter your phone number, pealse", this->phoneNumber))
		return(0);
	if (!this->checkAndSet("Enter your darkest secret, pealse", this->darkestSecret))
		return(0);
	return (1);
}

void	Contact:: displayInfoOfElem(void)
{
	if (this->index == 9)
	{
		std::cout << std::endl << "Index error" << std::endl << std::endl;
		return ;
	}
	std::cout << std::endl << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret " << this->darkestSecret << "\n" << std::endl;
}

void	Contact:: displayField(std::string info)
{
	std::cout << "|";
	if (info.length() > 10)
		std::cout << info.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << info;

}

void	Contact:: displayPreview(void)
{
	if (this->index == 9)
		return ;
	std::cout << "|" << std::setw(10) << this->index;
	displayField(this->firstName);
	displayField(this->lastName);
	displayField(this->nickname);
	std::cout << "|" << std::endl;
}
