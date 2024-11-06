/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:28:47 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/06 09:46:51 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

/* -------------- Constructors, copy assignment operator overload, destructor */
/* -------------------------------------------------------------------------- */

// constructor with name
ClapTrap::ClapTrap(const std::string& name)
: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    printColoredMessage("ClapTrap default constructor called", "\033[38;5;85m");
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& src) {
    printColoredMessage("ClapTrap copy constructor called", "\033[38;5;85m");
    *this = src;
}

// copy assignment operator overload
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    printColoredMessage("ClapTrap copy assignment operator called", "\033[38;5;85m");
    if (this != &rhs) {
        this->name = rhs.name;
        this->hitPoints = rhs.hitPoints;
        this->energyPoints = rhs.energyPoints;
        this->attackDamage = rhs.attackDamage;
    }
    return *this;
}

// destructor
ClapTrap::~ClapTrap(void) {
    printColoredMessage("ClapTrap destructor called", "\033[38;5;85m");
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0) {
        std::cout << "\033[38;5;85m"
                  << "ClapTrap " << this->name << " attacks " << target
                  << ", causing " << this->attackDamage << " points of damage!"
                  << "\033[0m" << std::endl;
        
        this->energyPoints--;
    } else {                        
        printColoredMessage("ClapTrap can't attack, " + this->name
                            + " has no energy points left!", "\033[38;5;85m");
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints > 0) {
        std::cout << "\033[38;5;85m"
                  << "ClapTrap " << this->name << " takes " << amount
                  << " points of damage!";

        this->hitPoints -= amount;
        std::cout << " (" << this->hitPoints << " left)"
                  << "\033[0m" << std::endl;
    }
    if (this->hitPoints < 0) {
        this->hitPoints = 0;
    }
    if (this->hitPoints == 0) {
        printColoredMessage("ClapTrap " + this->name + " is dead!", "\033[38;5;85m");
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints > 0) {
        std::cout << "\033[38;5;85m"
                  << "ClapTrap " << this->name << " is repaired for " << amount
                  << " points! (new points: " << this->hitPoints + amount << ")"
                  << "\033[0m" << std::endl;

        this->hitPoints += amount;
        this->energyPoints--;
    } else {
        printColoredMessage("ClapTrap can't be repaired, " + this->name
                            + " has no energy points left!", "\033[38;5;85m");
    }
}

/* ------------------------------------------------------------------ Getters */
/* -------------------------------------------------------------------------- */

std::string ClapTrap::getName(void) const {
    return this->name;
}

int ClapTrap::getHitPoints(void) const {
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints(void) const {
    return this->energyPoints;
}

int ClapTrap::getAttackDamage(void) const {
    return this->attackDamage;
}

/* ------------------------------------------------------------------ Setters */
/* -------------------------------------------------------------------------- */

void ClapTrap::setName(std::string newName) {
    this->name = newName;
}

void ClapTrap::setHitPoints(int newHitPoints) {
    this->hitPoints = newHitPoints;
}

void ClapTrap::setEnergyPoints(int newEnergyPoints) {
    this->energyPoints = newEnergyPoints;
}

void ClapTrap::setAttackDamage(int newAttackDamage) {
    this->attackDamage = newAttackDamage;
}

/* --------------------------------------------------------- Helper functions */
/* -------------------------------------------------------------------------- */

void ClapTrap::printColoredMessage(std::string message, std::string color) {
    std::cout << color << message << "\033[0m" << std::endl;
}