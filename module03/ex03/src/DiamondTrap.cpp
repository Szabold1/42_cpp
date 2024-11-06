/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:28:34 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/06 09:37:26 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* -------------- Constructors, copy assignment operator overload, destructor */
/* -------------------------------------------------------------------------- */

// constructor with name
DiamondTrap::DiamondTrap(const std::string& name)
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name) {
    printColoredMessage("DiamondTrap default constructor called", "\033[34;85m");
    ClapTrap::setHitPoints(FragTrap::hitPoints); // 100
    ClapTrap::setEnergyPoints(ScavTrap::energyPoints); // 50
    ClapTrap::setAttackDamage(FragTrap::attackDamage); // 30
}

// copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& src)
: ClapTrap(src),FragTrap(src), ScavTrap(src), name(src.name) {
    printColoredMessage("DiamondTrap copy constructor called", "\033[34;85m");
    *this = src;
}

// copy assignment operator overload
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
    printColoredMessage("DiamondTrap copy assignment operator called", "\033[34;85m");
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
        FragTrap::operator=(rhs);
        ScavTrap::operator=(rhs);
        name = rhs.name;
    }
    return *this;
}

// destructor
DiamondTrap::~DiamondTrap(void) {
    printColoredMessage("DiamondTrap destructor called", "\033[34;85m");
}

/* -------------------------------------------------------------------------- */

void DiamondTrap::whoAmI() {
    printColoredMessage("I am " + name, "\033[34;85m");
    printColoredMessage("My ClapTrap name is " + ClapTrap::getName(), "\033[34;85m");
}

/* -------------------------------------------------------------------------- */

// override the ClapTrap::attack function
void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}