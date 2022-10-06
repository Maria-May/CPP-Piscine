#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
			Contact contacts[8];
			size_t lastContact;

	public:
			PhoneBook();
			~PhoneBook();

			void	addContact(void);
			void	searchContact(void);
			void	exitFunc(void);
};

#endif