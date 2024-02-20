#include <iostream> // cout, endl, cin
#include <string> // string, getline
#include "../include/PhoneBook.hpp" // PhoneBook

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

// print welcome message and choices to the user
void	display_choices(void) {
    cout << "---------------------------------------------------\n"
            "|    Welcome to the awesome_phone_book!            |\n"
            "----------------------------------------------------\n"
            "|    Please choose an option:                      |\n"
            "|        ADD: save a new contact                   |\n"
            "|        SEARCH: display a specific contact        |\n"
            "|        EXIT: quit the program                    |\n"
            "----------------------------------------------------\n";
}

// handle user input
void	handle_input(PhoneBook &phone_book) {
	string	input;

	while (1) {
		cout << "\nEnter your choice (ADD, SEARCH, EXIT):\n";
		getline(cin, input);
		if (input == "ADD")
			phone_book.add_contact();
		else if (input == "SEARCH")
			phone_book.search_contact();
		else if (input == "EXIT")
			break;
		else
			cout << "Invalid choice. Please try again." << endl;
	}
}

int	main(void) {
	PhoneBook	phone_book;

	display_choices();
	handle_input(phone_book);
}