/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:07:34 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/25 12:47:16 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

/* -------------- Constructors, copy assignment operator overload, destructor */
/* -------------------------------------------------------------------------- */

// default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    printColoredMessage("ScavTrap default constructor called", "\033[33;85m");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

// copy constructor
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    printColoredMessage("ScavTrap copy constructor called", "\033[33;85m");
    *this = src;
}

// copy assignment operator overload
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    printColoredMessage("ScavTrap copy assignment operator called", "\033[33;85m");
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    return *this;
}

// destructor
ScavTrap::~ScavTrap(void) {
    printColoredMessage("ScavTrap destructor called", "\033[33;85m");
}


/* -------------------------------------------------- Public member functions */
/* -------------------------------------------------------------------------- */

// override the ClapTrap::attack function
void ScavTrap::attack(const std::string& target) {
    if (getEnergyPoints() > 0) {
        std::cout << "\033[33;85m"
                  << "ScavTrap " << getName() << " attacks " << target
                  << ", causing " << getAttackDamage() << " points of damage!"
                  << "\033[0m" << std::endl;
        
        setEnergyPoints(getEnergyPoints() - 1);
    } else {
        const std::string message = "ScavTrap can't attack, " + getName()
                                    + " has no energy points left!";
                                    
        printColoredMessage(message, "\033[33;85m");
    }
}

void ScavTrap::guardGate(void) {
    const std::string message = "ScavTrap " + getName() + " is now in Gate keeper mode.";
    printColoredMessage(message, "\033[33;85m");
}
