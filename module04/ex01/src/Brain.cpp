/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:59:49 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/08 16:37:54 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* -------------------------------------------------- Orthodox Canonical form */
/* -------------------------------------------------------------------------- */

// constructor
Brain::Brain() {
    printColoredMessage("Brain constructor called", "\033[1;35m");
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = "default idea";
    }
}

// copy constructor
Brain::Brain(const Brain& src) {
    printColoredMessage("Brain copy constructor called", "\033[1;35m");
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = src.ideas[i];
    }
}

// destructor
Brain::~Brain() {
    printColoredMessage("Brain destructor called", "\033[1;35m");
}

// assignment operator
Brain& Brain::operator=(const Brain& rhs) {
    printColoredMessage("Brain assignment operator called", "\033[1;35m");
    if (this != &rhs) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

/* --------------------------------------------------------- Getters, setters */
/* -------------------------------------------------------------------------- */

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return (this->ideas[index]);
    }
    return "";
}

void Brain::setIdea(int index, std::string idea) {
    if (index >= 0 && index < 100) {
        this->ideas[index] = idea;
    }
}

/* ------------------------------------------------------------------ Helpers */
/* -------------------------------------------------------------------------- */

void Brain::printColoredMessage(std::string message, std::string color) const {
    std::cout << color << message << "\033[0m" << std::endl;
}