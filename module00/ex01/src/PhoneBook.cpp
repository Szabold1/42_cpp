#include "../include/PhoneBookHelper.hpp"
#include "../include/PhoneBook.hpp" // PhoneBook
#include <iostream> // cout, endl, cin, right
#include <string> // string, getline

using std::cout;
using std::endl;
using std::cin;
using std::right;
using std::string;
using std::getline;

// default constructor
PhoneBook::PhoneBook(void) {
    contact_count = 0;
}

// add a new contact to the phone book
void PhoneBook::add_contact(void) {
    if (contact_count < MAX_CONTACTS) {
        Contact new_contact;
        string input;
        string fields[] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};

        for (int i = 0; i < 5; i++) {
            cout << fields[i] << ":\n";
            getline(cin, input);
            if (!input.empty()) {
                switch (i)
                {
                    case 0:
                        new_contact.set_first_name(input);
                        break;
                    case 1:
                        new_contact.set_last_name(input);
                        break;
                    case 2:
                        new_contact.set_nickname(input);
                        break;
                    case 3:
                        new_contact.set_phone_number(input);
                        break;
                    case 4:
                        new_contact.set_darkest_secret(input);
                        break;
                }
            }
            else {
                cout << "Invalid input. Please try again." << endl;
                i--;
            }
        }
        contacts[contact_count] = new_contact;
        contact_count++;
        cout << "Contact successfully added. ✅" << endl;
    } else
        cout << "The phone book is full." << endl;
}

// search for a contact in the phone book and display it
void PhoneBook::search_contact(void) {
    if (contact_count == 0) {
        cout << "The phone book is empty." << endl;
        return;
    } else {
        display_contacts_list(contacts, contact_count);
        int index = handle_input(contact_count);
        display_contact(contacts, index);
    }
}