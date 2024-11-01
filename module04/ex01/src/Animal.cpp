/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:11:11 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 08:03:24 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// default constructor
Animal::Animal(void) : type("Animal") {
    printColoredMessage("Animal constructor called", "\033[1;32m");
}

// copy constructor
Animal::Animal(const Animal& src) : type(src.type) {
    printColoredMessage("Animal copy constructor called", "\033[1;32m");
}

// destructor
Animal::~Animal(void) {
    printColoredMessage("Animal destructor called", "\033[1;32m");
}

// copy assignment operator
Animal& Animal::operator=(const Animal& rhs) {
    printColoredMessage("Animal copy assignment operator called", "\033[1;32m");
    if (this != &rhs) {
        this->type = rhs.type;
    }
    return (*this);
}

/* -------------------------------------------------------- Getters & setters */
/* -------------------------------------------------------------------------- */

std::string Animal::getType(void) const {
    return (this->type);
}

void Animal::setType(std::string newType) {
    this->type = newType;
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

void Animal::makeSound(void) const {
    printColoredMessage("Animal sound", "\033[1;32m");
}

/* ------------------------------------------------------------------ Helpers */
/* -------------------------------------------------------------------------- */

void Animal::printColoredMessage(std::string message, std::string color) const {
    std::cout << color << message << "\033[0m" << std::endl;
}