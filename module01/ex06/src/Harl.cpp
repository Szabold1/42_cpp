/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:32:35 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/07 18:19:59 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* ****************************************************************** private */

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "debugging..." << std::endl << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "information..." << std::endl << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "warning..." << std::endl << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "error..." << std::endl << std::endl;
}

/* ******************************************************************* public */

Harl::Harl() {
	Harl::functions[0] = &Harl::debug;
	Harl::functions[1] = &Harl::info;
	Harl::functions[2] = &Harl::warning;
	Harl::functions[3] = &Harl::error;
}

void Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4 && level != levels[i])
		i++;
	
	switch (i) {
		case 0:
			(this->*functions[0])();
		case 1:
			(this->*functions[1])();
		case 2:
			(this->*functions[2])();
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << "Complaining about something..." << std::endl;
	}
}