/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:36 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 12:46:02 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// default constructor
Dog::Dog(void) : Animal(), brain(new Brain()) {
    printColoredMessage("Dog constructor called", "\033[1;34m");
    setType("Dog");
}

// copy constructor
Dog::Dog(const Dog& src) : Animal(src), brain(new Brain(*src.brain)) {
    printColoredMessage("Dog copy constructor called", "\033[1;34m");
}

// destructor
Dog::~Dog(void) {
    printColoredMessage("Dog destructor called", "\033[1;34m");
    delete this->brain;
}

// copy assignment operator
Dog& Dog::operator=(const Dog& rhs) {
    printColoredMessage("Dog copy assignment operator called", "\033[1;34m");
    if (this != &rhs) {
        Animal::operator=(rhs);
        delete this->brain;
        this->brain = new Brain(*rhs.brain);
    }
    return (*this);
}

/* --------------------------------------------------------- Member functions */
/* -------------------------------------------------------------------------- */

// override the Animal::makeSound function
void Dog::makeSound(void) const {
    printColoredMessage("Dog sound", "\033[1;34m");
}

/* --------------------------------------------------------- Getters, setters */
/* -------------------------------------------------------------------------- */

std::string Dog::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return (this->brain->getIdea(index));
    }
    return ("Error: index out of range");
}

void Dog::setIdea(int index, std::string idea) {
    this->brain->setIdea(index, idea);
}