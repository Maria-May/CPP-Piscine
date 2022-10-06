#include "PhoneBook.hpp"

PhoneBook:: PhoneBook()
{
	this->lastContact = 0;
}

PhoneBook:: ~PhoneBook()
{

}

void	PhoneBook:: addContact(void)
{
	if (this->contacts[this->lastContact % 8].setContact(this->lastContact % 8))
		PhoneBook::lastContact++;
}

void	PhoneBook::	searchContact(void)
{
	int	index;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8; i++)
		this->contacts[i].displayPreview();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Enter index of contact to display full information: ";
	while (!(std::cin >> index))
	{
		std::cout << std::endl << "Enter a valid integer, try again: ";
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			continue ;
		}
	}
	if (index < 0 || index > 7)
	{
		std::cout << std::endl << "Index error\n"<< std::endl;
		return ;
	}
	this->contacts[index].displayInfoOfElem();
}

void	PhoneBook:: exitFunc(void)
{
	exit(EXIT_SUCCESS);
}
