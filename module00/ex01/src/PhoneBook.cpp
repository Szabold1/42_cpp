/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:31:56 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/03 11:31:57 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(void) : contactCount(0) {
}

// add a new contact to the phone book
void	PhoneBook::addContact(void) {
	std::string	input;
	std::string	fields[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};

	// get the contact's information one by one
	for (int i = 0; i < 5; i++) {
		std::cout << "Enter the " << fields[i] << " of the contact:" << std::endl;
		std::getline(std::cin, input);
		if (checkInput(i, input) == false) {
			std::cout << "Invalid input. Please try again." << std::endl;
			i--;
		}
		else
			contacts[contactCount % MAX_CONTACTS].setField(i, input);
	}
	contactCount++;
}

// search for a contact in the phone book and display it
void	PhoneBook::searchContact(void) {
	if (contactCount == 0) {
		std::cout << "The phone book is empty." << std::endl;
		return ;
	}
	displayContacts(contacts, contactCount);
	int	index = handleIndexInput(contactCount);
	displayContact(index, contacts);
}