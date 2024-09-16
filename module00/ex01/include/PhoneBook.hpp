/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:38:48 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/16 09:24:40 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string> // string
#include <sstream> // stringstream
#include <iomanip> // setw

#define MAX_CONTACTS 8

class PhoneBook {
private:
	Contact	contacts[MAX_CONTACTS];
	int		contactCount;

	bool	checkInput(int i, std::string input);
	void	displayContacts(Contact contacts[], int contactCount);
	int		handleIndexInput(int contactCount);
	void	displayContact(int index, Contact contacts[]);

public:
	PhoneBook(void);
	void	addContact(void);
	void	searchContact(void);
};

#endif