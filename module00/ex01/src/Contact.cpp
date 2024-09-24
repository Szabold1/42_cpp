/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:31:10 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/23 19:39:17 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* ----------------------------------------------------------- Setter methods */
/* -------------------------------------------------------------------------- */
void	Contact::setField(int i, std::string str) {
	if (i == 0)
		setFirstName(str);
	else if (i == 1)
		setLastName(str);
	else if (i == 2)
		setNickname(str);
	else if (i == 3)
		setPhoneNumber(str);
	else if (i == 4)
		setDarkestSecret(str);
}

void	Contact::setFirstName(std::string str) {
	firstName = str;
}

void	Contact::setLastName(std::string str) {
	lastName = str;
}

void	Contact::setNickname(std::string str) {
	nickname = str;
}

void	Contact::setPhoneNumber(std::string str) {
	phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str) {
	darkestSecret = str;
}

/* ----------------------------------------------------------- Getter methods */
/* ---------------------------------------------------------------------------*/
std::string	Contact::getFirstName(void) {
	return (firstName);
}

std::string	Contact::getLastName(void) {
	return (lastName);
}

std::string	Contact::getNickname(void) {
	return (nickname);
}

std::string	Contact::getPhoneNumber(void) {
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret(void) {
	return (darkestSecret);
}