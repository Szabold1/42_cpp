/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:19:22 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 15:40:53 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// default constructor
WrongCat::WrongCat(void) : WrongAnimal() {
    printColoredMessage("WrongCat constructor called", "\033[1;36m");
    setType("WrongCat");
}

// copy constructor
WrongCat::WrongCat(const WrongCat& src) {
    printColoredMessage("WrongCat copy constructor called", "\033[1;36m");
    *this = src;
}

// destructor
WrongCat::~WrongCat(void) {
    printColoredMessage("WrongCat destructor called", "\033[1;36m");
}

// copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    printColoredMessage("WrongCat copy assignment operator called", "\033[1;36m");
    if (this != &rhs) {
        this->type = rhs.type;
    }
    return (*this);
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

// override the Animal::makeSound function
void WrongCat::makeSound(void) const {
    printColoredMessage("WrongCat sound", "\033[1;36m");
}
