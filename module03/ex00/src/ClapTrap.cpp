/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:28:47 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/24 12:44:32 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

/* -------------- Constructors, copy assignment operator overload, destructor */
/* -------------------------------------------------------------------------- */

// default constructor
ClapTrap::ClapTrap(std::string name) : name(name),
                                       hitPoints(10),
                                       energyPoints(10),
                                       attackDamage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& src) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

// copy assignment operator overload
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
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
    std::cout << "ClapTrap destructor called" << std::endl;
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target
              << ", causing " << this->attackDamage << " points of damage!"
              << std::endl;
        
        this->energyPoints--;
    } else {
        std::cout << "ClapTrap can't attack, " << this->name
                  << " has no energy points left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints > 0) {
        std::cout << "ClapTrap " << this->name << " takes " << amount
              << " points of damage!";

        this->hitPoints -= amount;
        std::cout << " (" << this->hitPoints << " left)" << std::endl;
    }
    if (this->hitPoints < 0) {
        this->hitPoints = 0;
    }
    if (this->hitPoints == 0) {
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints > 0) {
        std::cout << "ClapTrap " << this->name << " is repaired for " << amount
              << " points! (new points: " << this->hitPoints + amount << ")" << std::endl;

        this->hitPoints += amount;
        this->energyPoints--;
    } else {
        std::cout << "ClapTrap can't be repaired, " << this->name
                  << " has no energy points left!" << std::endl;
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