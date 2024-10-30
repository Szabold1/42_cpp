/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:53:33 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/28 20:46:40 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

/* -------------- Constructors, copy assignment operator overload, destructor */
/* -------------------------------------------------------------------------- */

FragTrap::FragTrap(void) : ClapTrap() {
    printColoredMessage("FragTrap default constructor called", "\033[36;85m");
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

// default constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    printColoredMessage("FragTrap default constructor called", "\033[36;85m");
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

// copy constructor
FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
    printColoredMessage("FragTrap copy constructor called", "\033[36;85m");
    *this = src;
}

// copy assignment operator overload
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    printColoredMessage("FragTrap copy assignment operator called", "\033[36;85m");
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    return *this;
}

// destructor
FragTrap::~FragTrap(void) {
    printColoredMessage("FragTrap destructor called", "\033[36;85m");
}


/* -------------------------------------------------- Public member functions */
/* -------------------------------------------------------------------------- */

void FragTrap::highFivesGuys(void) {
    const std::string message = "FragTrap " + getName() + " high fives.";
    printColoredMessage(message, "\033[36;85m");
}