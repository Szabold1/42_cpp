/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:31:28 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/23 19:44:48 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

// print welcome message and choices to the user
static void	display_choices(void) {
	std::cout << "---------------------------------------------------\n"
				 "|    Welcome to the awesomePhoneBook!              |\n"
				 "----------------------------------------------------\n"
				 "|    Please choose an option:                      |\n"
				 "|        ADD: save a new contact                   |\n"
				 "|        SEARCH: display a specific contact        |\n"
				 "|        EXIT: quit the program                    |\n"
				 "----------------------------------------------------\n";
	std::cout << std::endl;
}

// handle user input
static void	handle_input(PhoneBook &phone_book) {
	std::string	input;

	while (1) {
		std::cout << std::endl;
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << "Enter your choice (ADD, SEARCH, EXIT):" << std::endl;
		if (!std::getline(std::cin, input)) {
			std::cout << "Input ended or failed. Exiting..." << std::endl;
			exit(1);
		}
		if (input == "ADD")
			phone_book.addContact();
		else if (input == "SEARCH")
			phone_book.searchContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid choice. Please try again." << std::endl;
	}
}

int	main(void) {
	PhoneBook	phoneBook;

	display_choices();
	handle_input(phoneBook);
}