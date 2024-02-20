#ifndef PHONE_BOOK_HELPER_HPP
#define PHONE_BOOK_HELPER_HPP

#include "Contact.hpp" // Contact

// helper functions for PhoneBook
void	display_contacts_list(Contact contacts[], int contact_count);
int		handle_input(int contact_count);
void	display_contact(Contact contacts[], int index);

#endif