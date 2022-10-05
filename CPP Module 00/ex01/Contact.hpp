#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
			std::string	firstName;
			std::string	lastName;
			std::string	nickname;
			std::string	phoneNumber;
			std::string	darkestSecret;

			int	checkAndSet(char *message, std:: string infoToSet);
	public:
			Contact();
			~Contact();
			int	setContact(void);

};

#endif