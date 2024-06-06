/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:14:43 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/06 12:13:50 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// default constructor
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

// member functions
void HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}