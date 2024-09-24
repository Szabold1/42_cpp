/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:04:45 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/24 10:44:09 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// default constructor
Weapon::Weapon(std::string type) : type(type) {}

// getters
const std::string& Weapon::getType(void) const {
	return (type);
}

// setters
void Weapon::setType(const std::string& newType) {
	type = newType;
}