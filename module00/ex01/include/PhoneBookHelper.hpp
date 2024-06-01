#ifndef PHONE_BOOK_HELPER_HPP
#define PHONE_BOOK_HELPER_HPP

#include "Contact.hpp" // Contact
#include <iostream> // cout, cin, endl
#include <string> // string
#include <sstream> // stringstream
#include <iomanip> // setw

/* ---------------------------------------------------- helpers for PhoneBook */
/* -------------------------------------------------------------------------- */
bool	checkInput(int i, std::string input);
void	displayContacts(Contact contacts[], int contactCount);
int		handleIndexInput(int contactCount);
void	displayContact(int index, Contact contacts[]);

#endif