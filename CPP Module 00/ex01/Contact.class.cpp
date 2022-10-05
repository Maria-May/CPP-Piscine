#include "Contact.hpp"

Contact:: Contact()
{

}

Contact:: ~Contact()
{

}

int	checkAndSet(char *message, std:: string &infoToSet) // checking &
{
	std::cout << message << std::endl;
	std::getline(std::cin, infoToSet);
	if (std::cin.eof() || !infoToSet.length())
	{
		std::cout << "cannot create empty contact" << std::endl;
		return (0);
	}
	return (1);
}

int	Contact:: setContact(void)
{
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
