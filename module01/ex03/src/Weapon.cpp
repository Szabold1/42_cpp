/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:04:45 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/06 11:24:53 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// default constructor
Weapon::Weapon(std::string type) : type(type) {}

// getters
const std::string &Weapon::getType(void) {
	return (this->type);
}

// setters
void Weapon::setType(std::string type) {
	this->type = type;
}