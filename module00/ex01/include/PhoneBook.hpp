/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:38:48 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/03 11:38:48 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include "PhoneBookHelper.hpp"
#include <iostream>

#define MAX_CONTACTS 8

class PhoneBook {
private:
	Contact	contacts[MAX_CONTACTS];
	int		contactCount;

public:
	PhoneBook(void);
	void	addContact(void);
	void	searchContact(void);
};

#endif