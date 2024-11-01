/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:19:22 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 11:09:54 by bszabo           ###   ########.fr       */
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
WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
    printColoredMessage("WrongCat copy constructor called", "\033[1;36m");
}

// destructor
WrongCat::~WrongCat(void) {
    printColoredMessage("WrongCat destructor called", "\033[1;36m");
}

// copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    printColoredMessage("WrongCat copy assignment operator called", "\033[1;36m");
    if (this != &rhs) {
        WrongAnimal::operator=(rhs);
    }
    return (*this);
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

// override the Animal::makeSound function
void WrongCat::makeSound(void) const {
    printColoredMessage("WrongCat sound", "\033[1;36m");
}
