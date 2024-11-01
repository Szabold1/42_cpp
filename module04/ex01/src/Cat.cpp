/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:33 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 12:40:15 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// default constructor
Cat::Cat(void) : Animal(), brain(new Brain()) {
    printColoredMessage("Cat constructor called", "\033[1;36m");
    setType("Cat");
}

// copy constructor
Cat::Cat(const Cat& src) : Animal(src), brain(new Brain(*src.brain)) {
    printColoredMessage("Cat copy constructor called", "\033[1;36m");
}

// destructor
Cat::~Cat(void) {
    printColoredMessage("Cat destructor called", "\033[1;36m");
    delete this->brain;
}

// copy assignment operator
Cat& Cat::operator=(const Cat& rhs) {
    printColoredMessage("Cat copy assignment operator called", "\033[1;36m");
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
void Cat::makeSound(void) const {
    printColoredMessage("Cat sound", "\033[1;36m");
}

/* --------------------------------------------------------- Getters, setters */
/* -------------------------------------------------------------------------- */

std::string Cat::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return (this->brain->getIdea(index));
    }
    return ("Error: index out of range");
}

void Cat::setIdea(int index, std::string idea) {
    this->brain->setIdea(index, idea);
}