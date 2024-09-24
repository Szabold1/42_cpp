/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:05:02 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/24 10:51:17 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// default constructor
HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

// setters
void HumanB::setWeapon(Weapon& newWeapon) {
	weapon = &newWeapon;
}

// member functions
void HumanB::attack(void) const {
	std::cout << name << " attacks with their " << ((weapon) ? weapon->getType() : "[no weapon]");
	std::cout << std::endl;
}