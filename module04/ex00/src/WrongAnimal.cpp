/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:19:20 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 15:22:28 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// default constructor
WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
    printColoredMessage("WrongAnimal constructor called", "\033[1;35m");
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& src) : type(src.type) {
    printColoredMessage("WrongAnimal copy constructor called", "\033[1;35m");
    *this = src;
}

// destructor
WrongAnimal::~WrongAnimal(void) {
    printColoredMessage("WrongAnimal destructor called", "\033[1;35m");
}

// copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    printColoredMessage("WrongAnimal copy assignment operator called", "\033[1;35m");
    if (this != &rhs) {
        this->type = rhs.type;
    }
    return (*this);
}

/* -------------------------------------------------------- Getters & setters */
/* -------------------------------------------------------------------------- */

std::string WrongAnimal::getType(void) const {
    return (this->type);
}

void WrongAnimal::setType(std::string newType) {
    this->type = newType;
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

void WrongAnimal::makeSound(void) const {
    printColoredMessage("WrongAnimal sound", "\033[1;35m");
}

/* ------------------------------------------------------------------ Helpers */
/* -------------------------------------------------------------------------- */

void WrongAnimal::printColoredMessage(std::string message, std::string color) const {
    std::cout << color << message << "\033[0m" << std::endl;
}