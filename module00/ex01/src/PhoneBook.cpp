/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:31:56 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/23 19:47:19 by bszabo           ###   ########.fr       */
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
		if (!std::getline(std::cin, input)) {
			std::cout << "Input ended or failed. Exiting..." << std::endl;
			exit(1);
		}
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

/* ----------------------------------------------- private & helper functions */
/* -------------------------------------------------------------------------- */
// check if the given string contains only alphabetic characters
// return true if it does, false otherwise
static bool	isStrAlpha(std::string str) {
	int	str_len = str.length();

	for (int i = 0; i < str_len; i++) {
		if (!isalpha(str[i]))
			return false;
	}
	return true;
}

// check if the given string contains only digit characters
// return true if it does, false otherwise
static bool	isStrDigit(std::string str) {
	int	str_len = str.length();

	for (int i = 0; i < str_len; i++) {
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

// check if the input is valid
// return true if it is, false otherwise
bool PhoneBook::checkInput(int i, std::string input) {
	if (i == 0 || i == 1 || i == 2) {
		if (input.empty() || !isStrAlpha(input))
			return false;
	}
	else if (i == 3) {
		if (input.empty() || !isStrDigit(input))
			return false;
	}
	else if (i == 4) {
		if (input.empty())
			return false;
	}
	return true;
}

// truncate a string to 10 characters
static std::string	truncStr(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

// display the list of contacts in the phone book
void PhoneBook::displayContacts(Contact contacts[], int contactCount) {
	int	nbContacts = contactCount;
	if (nbContacts > 8)
		nbContacts = 8;
	const int	colWidth = 10;

	std::cout << std::endl << "     index|first name| last name|  nickname" << std::endl;
	std::cout << std::string(4 * colWidth + 5, '-') << std::endl;
	for (int i = 0; i < nbContacts; i++) {
		std::cout << std::setw(colWidth) << std::right << i << "|";
		std::cout << std::setw(colWidth) << std::right << truncStr(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(colWidth) << std::right << truncStr(contacts[i].getLastName()) << "|";
		std::cout << std::setw(colWidth) << std::right << truncStr(contacts[i].getNickname()) << std::endl;
	}
	std::cout << std::endl;
}

// prompt the user to enter the index of the contact to display
// return the index entered by the user
int PhoneBook::handleIndexInput(int contactCount) {
	std::string	input;
	int	nbContacts = contactCount;
	if (nbContacts > 8)
		nbContacts = 8;

	while (1) {
		std::cout << "Enter the index of the contact you want to display:" << std::endl;
		if (!std::getline(std::cin, input)) {
			std::cout << "Input ended or failed. Exiting..." << std::endl;
			exit(1);
		}
		if (input.empty() || !isStrDigit(input)) {
			std::cout << "Invalid input. Please try again." << std::endl;
			continue;
		}
		
		int	index = std::stoi(input);
		if (index < 0 || index >= nbContacts) {
			std::cout << "Invalid index. Please try again." << std::endl;
			continue;
		}
		return index;
	}
	return -1;
}

// display the contact at the given index
void PhoneBook::displayContact(int index, Contact contacts[]) {
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}