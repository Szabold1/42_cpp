#include "../include/Contact.hpp" // Contact
#include <string> // string
#include <iostream> // cout, endl, cin, right
#include <iomanip> // setw
#include <sstream> // stringstream

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::right;
using std::setw;
using std::stringstream;

// truncate a string to 10 characters
static string trunc_str(string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

// display the list of contacts in the phone book
void display_contacts_list(Contact contacts[], int contact_count)
{
    cout << "\n     index|first name| last name|  nickname" << endl;
    cout << string(4 * 10 + 5, '-') << endl;
    for (int i = 0; i < contact_count; i++) {
        cout << right << setw(10) << i << "|";
        cout << right << setw(10) << trunc_str(contacts[i].get_first_name()) << "|";
        cout << right << setw(10) << trunc_str(contacts[i].get_last_name()) << "|";
        cout << right << setw(10) << trunc_str(contacts[i].get_nickname()) << endl;
    }
}

// handle user input for selecting a contact and return the index
int handle_input(int contact_count) {
    int index;
    string input;

    while (1) {
        cout << "\nEnter the index of the contact you want to display:\n";
        getline(cin, input);
        stringstream ss(input);
        if (ss >> index && index >= 0 && index < contact_count)
            break;
        cout << "Invalid index. Please try again." << endl;
    }
    return index;
}

// display a contact from the phone book
void display_contact(Contact contacts[], int index) {
    cout << "\nFirst name: " << contacts[index].get_first_name() << endl;
    cout << "Last name: " << contacts[index].get_last_name() << endl;
    cout << "Nickname: " << contacts[index].get_nickname() << endl;
    cout << "Phone number: " << contacts[index].get_phone_number() << endl;
    cout << "Darkest secret: " << contacts[index].get_darkest_secret() << endl;
}