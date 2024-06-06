/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:05:02 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/06 12:21:59 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// default constructor
HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

// setters
void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

// member functions
void HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << ((this->weapon) ? this->weapon->getType() : "[no weapon]");
	std::cout << std::endl;
}