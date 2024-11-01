/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:36 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 11:07:51 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// default constructor
Dog::Dog(void) : Animal() {
    printColoredMessage("Dog constructor called", "\033[1;34m");
    setType("Dog");
}

// copy constructor
Dog::Dog(const Dog& src) : Animal(src) {
    printColoredMessage("Dog copy constructor called", "\033[1;34m");
}

// destructor
Dog::~Dog(void) {
    printColoredMessage("Dog destructor called", "\033[1;34m");
}

// copy assignment operator
Dog& Dog::operator=(const Dog& rhs) {
    printColoredMessage("Dog copy assignment operator called", "\033[1;34m");
    if (this != &rhs) {
        Animal::operator=(rhs);
    }
    return (*this);
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

// override the Animal::makeSound function
void Dog::makeSound(void) const {
    printColoredMessage("Dog sound", "\033[1;34m");
}