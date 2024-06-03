/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookHelper.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:38:53 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/03 11:38:54 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HELPER_HPP
#define PHONE_BOOK_HELPER_HPP

#include "Contact.hpp" // Contact
#include <iostream> // cout, cin, endl
#include <string> // string
#include <sstream> // stringstream
#include <iomanip> // setw

/* ---------------------------------------------------- helpers for PhoneBook */
/* -------------------------------------------------------------------------- */
bool	checkInput(int i, std::string input);
void	displayContacts(Contact contacts[], int contactCount);
int		handleIndexInput(int contactCount);
void	displayContact(int index, Contact contacts[]);

#endif