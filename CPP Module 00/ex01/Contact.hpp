#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
			id_t	index;
			std::string	firstName;
			std::string	lastName;
			std::string	nickname;
			std::string	phoneNumber;
			std::string	darkestSecret;

			int	checkAndSet(const char *message, std:: string &infoToSet);
	public:
			Contact();
			~Contact();
			int		setContact(id_t index);
			void	displayInfoOfElem(void);
			void	displayPreview(void);
			void	displayField(std::string info);
};

#endif