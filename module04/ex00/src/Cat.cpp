/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:33 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 15:10:25 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// default constructor
Cat::Cat(void) : Animal() {
    printColoredMessage("Cat constructor called", "\033[1;33m");
    setType("Cat");
}

// copy constructor
Cat::Cat(const Cat& src) {
    printColoredMessage("Cat copy constructor called", "\033[1;33m");
    *this = src;
}

// destructor
Cat::~Cat(void) {
    printColoredMessage("Cat destructor called", "\033[1;33m");
}

// copy assignment operator
Cat& Cat::operator=(const Cat& rhs) {
    printColoredMessage("Cat copy assignment operator called", "\033[1;33m");
    if (this != &rhs) {
        this->type = rhs.type;
    }
    return (*this);
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

// override the Animal::makeSound function
void Cat::makeSound(void) const {
    printColoredMessage("Cat sound", "\033[1;33m");
}
