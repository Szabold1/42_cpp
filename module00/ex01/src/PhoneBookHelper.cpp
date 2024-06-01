#include "PhoneBookHelper.hpp"

/* -------------------------------------- helpers for PhoneBook::addContact() */
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
bool	checkInput(int i, std::string input) {
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

/* ----------------------------------- helpers for PhoneBook::searchContact() */
/* -------------------------------------------------------------------------- */

// truncate a string to 10 characters
static std::string	truncStr(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

// display the list of contacts in the phone book
void	displayContacts(Contact contacts[], int contactCount) {
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
int	handleIndexInput(int contactCount) {
	std::string	input;
	int	nbContacts = contactCount;
	if (nbContacts > 8)
		nbContacts = 8;

	while (1) {
		std::cout << "Enter the index of the contact you want to display:" << std::endl;
		std::getline(std::cin, input);
		if (input.empty() || !isStrDigit(input)) {
			std::cout << "Invalid input. Please try again." << std::endl;
			continue ;
		}
		// extract the index from the input string into an integer
		std::stringstream	ss(input);
		int	index = -1;
		ss >> index;
		// check if the extraction was successful and if the index is valid
		if (ss.fail() || index < 0 || index >= nbContacts) {
			std::cout << "Invalid index. Please try again." << std::endl;
			continue ;
		}
		return index;
	}
}

// display the contact at the given index
void	displayContact(int index, Contact contacts[]) {
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}