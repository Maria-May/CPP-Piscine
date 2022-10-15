#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	PhoneBook;
	std::string	cmdLine;

	std::cout << "Hello friend! This is a phone book." << std::endl;
	std::cout << "You can write ADD to add contact to phone book." << std::endl;	
	std::cout << "You can write SEARCH to find contact that you want." << std::endl;
	std::cout << "Or you can write EXIT to close the programm." << std::endl;
	std::cout << "Phone book can store only 8 contacts" << std::endl;
	std::cout << "HAVE FUN!" << std::endl;
	while(1)
	{
		std::cout << ">";
		std::getline(std::cin, cmdLine);
		if (std::cin.eof())
		{
			std::cout << "Try agin, please)" << std::endl;
			std::cin.clear();
			clearerr(stdin);
			continue;
		}
		else if (cmdLine == "ADD")
			PhoneBook.addContact();
		else if (cmdLine == "SEARCH")
			PhoneBook.searchContact();
		else if (cmdLine == "EXIT")
			PhoneBook.exitFunc();
		else
			std::cout << "PhoneBook can only accept ADD SEARCH EXIT commands" << std::endl;	
	}
	return (0);
}
























// #include <iostream>

// class A
// {
// 	public:
// 	unsigned int k : 3;
// };

// int main()
// {
// 	A a;

// 	a.k = 0;
// 	for (int i = 0; i < 100; i++)
// 	{
// 		std::cout << a.k << std::endl;
// 		a.k += 1;
// 	}

// }