#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	PhoneBook;
	std::string	cmdLine;

	while(1)
	{
		std::cout << ">";
		std::getline(std::cin, cmdLine);
		if (cmdLine == "add")
			PhoneBook.addContact();
		else if (cmdLine == "search")
			PhoneBook.searchContact();
		else if (cmdLine == "exit")
			PhoneBook.exitFunc();
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