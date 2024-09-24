/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:14:43 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/24 10:40:57 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// default constructor
HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

// member functions
void HumanA::attack(void) const {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}