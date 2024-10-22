/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:26:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/22 12:16:28 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/* ---------------------------------------------------------------------------*/

// default constructor
Fixed::Fixed(void) : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

// constructor with int parameter
Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = value << Fixed::fractionalBits; // 4 << 8 = 1024
}

// constructor with float parameter
Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = static_cast<int>(roundf(value * (1 << Fixed::fractionalBits))); // 4.2 * 256 = 1075.2 -> 1075
}

/* ---------------------------------------------------------------------------*/

// copy constructor
Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    // this->fixedPointValue = src.fixedPointValue;
    *this = src;
}

// copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->fixedPointValue = rhs.getRawBits();
    return (*this);
}

/* ---------------------------------------------------------------------------*/

// destructor
Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

/* ---------------------------------------------------------------------------*/

// overload << (insertion) operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return (out);
}

/* ---------------------------------------------------------- Getter & Setter */
/* ---------------------------------------------------------------------------*/
int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

/* -------------------------------------------------------------- Conversions */
/* ---------------------------------------------------------------------------*/
float Fixed::toFloat(void) const {
    return static_cast<float>(this->fixedPointValue) 
            / static_cast<float>(1 << Fixed::fractionalBits); // 1075 / (1 * 256) = 4.19921875
}

int Fixed::toInt(void) const {
    return this->fixedPointValue >> Fixed::fractionalBits; // 1024 >> 8 (1024 / 256) = 4
}