#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	static const int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];
	int contact_count;

public:
	PhoneBook(void);
	void add_contact(void);
	void search_contact(void);
};

#endif