/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:11:11 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 08:03:24 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// default constructor
AAnimal::AAnimal(void) : type("AAnimal") {
    printColoredMessage("AAnimal constructor called", "\033[1;32m");
}

// copy constructor
AAnimal::AAnimal(const AAnimal& src) : type(src.type) {
    printColoredMessage("AAnimal copy constructor called", "\033[1;32m");
}

// destructor
AAnimal::~AAnimal(void) {
    printColoredMessage("AAnimal destructor called", "\033[1;32m");
}

// copy assignment operator
AAnimal& AAnimal::operator=(const AAnimal& rhs) {
    printColoredMessage("AAnimal copy assignment operator called", "\033[1;32m");
    if (this != &rhs) {
        this->type = rhs.type;
    }
    return (*this);
}

/* -------------------------------------------------------- Getters & setters */
/* -------------------------------------------------------------------------- */

std::string AAnimal::getType(void) const {
    return (this->type);
}

void AAnimal::setType(std::string newType) {
    this->type = newType;
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

void AAnimal::makeSound(void) const {
    printColoredMessage("AAnimal sound", "\033[1;32m");
}

/* ------------------------------------------------------------------ Helpers */
/* -------------------------------------------------------------------------- */

void AAnimal::printColoredMessage(std::string message, std::string color) const {
    std::cout << color << message << "\033[0m" << std::endl;
}