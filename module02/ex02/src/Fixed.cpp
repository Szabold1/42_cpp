/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:26:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/22 16:09:39 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"


/* -------------- Constructors, copy assignment operator overload, destructor */
/* -------------------------------------------------------------------------- */

// default constructor
Fixed::Fixed(void) : fixedPointValue(0) {
    // std::cout << "Default constructor called" << std::endl;
}

// constructor with int parameter
Fixed::Fixed(const int value) {
    // std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = value << Fixed::fractionalBits; // 4 << 8 = 1024
}

// constructor with float parameter
Fixed::Fixed(const float value) {
    // std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = static_cast<int>(roundf(value * (1 << Fixed::fractionalBits))); // 4.2 * 256 = 1075.2 -> 1075
}

// copy constructor
Fixed::Fixed(const Fixed& src) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

// copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& rhs) {
    // std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(rhs.getRawBits());
    return (*this);
}

// destructor
Fixed::~Fixed(void) {
    // std::cout << "Destructor called" << std::endl;
}

/* ----------------------------------------------------- Operator overloading */
/* -------------------------------------------------------------------------- */

// overload << (insertion) operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return (out);
}

// overload > operator
bool Fixed::operator>(const Fixed& rhs) const {
    return this->getRawBits() > rhs.getRawBits();
}

// overload < operator
bool Fixed::operator<(const Fixed& rhs) const {
    return this->getRawBits() < rhs.getRawBits();
}

// overload >= operator
bool Fixed::operator>=(const Fixed& rhs) const {
    return this->getRawBits() >= rhs.getRawBits();
}

// overload <= operator
bool Fixed::operator<=(const Fixed& rhs) const {
    return this->getRawBits() <= rhs.getRawBits();
}

// overload == operator
bool Fixed::operator==(const Fixed& rhs) const {
    return this->getRawBits() == rhs.getRawBits();
}

// overload != operator
bool Fixed::operator!=(const Fixed& rhs) const {
    return this->getRawBits() != rhs.getRawBits();
}

// overload + operator
Fixed Fixed::operator+(const Fixed& rhs) const {
    Fixed result;
    result.setRawBits(this->getRawBits() + rhs.getRawBits());
    return result;
}

// overload - operator
Fixed Fixed::operator-(const Fixed& rhs) const {
    Fixed result;
    result.setRawBits(this->getRawBits() - rhs.getRawBits());
    return result;
}

// overload * operator
Fixed Fixed::operator*(const Fixed& rhs) const {
    Fixed result;
    result.setRawBits((this->getRawBits() * rhs.getRawBits()) >> Fixed::fractionalBits);
    return result;
}

// overload / operator
Fixed Fixed::operator/(const Fixed& rhs) const {
    Fixed result;
    if (rhs.getRawBits() == 0)
        std::cerr << "Error: Division by zero" << std::endl;
    else
        result.setRawBits((this->getRawBits() << Fixed::fractionalBits) / rhs.getRawBits());
    return result;
}

// overload ++ operator (prefix)
Fixed& Fixed::operator++(void) {
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

// overload ++ operator (postfix)
Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    this->setRawBits(this->getRawBits() + 1);
    return tmp;
}

// overload -- operator (prefix)
Fixed& Fixed::operator--(void) {
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

// overload -- operator (postfix)
Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    this->setRawBits(this->getRawBits() - 1);
    return tmp;
}

/* ----------------------------------------------------------------- Min & Max */
/* --------------------------------------------------------------------------- */

// min
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b ? a : b);
}

// min const
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b ? a : b);
}

// max
Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b ? a : b);
}

// max const
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b ? a : b);
}

/* ---------------------------------------------------------- Getter & Setter */
/* -------------------------------------------------------------------------- */
int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

/* --------------------------------------------------------------- Converting */
/* -------------------------------------------------------------------------- */

float Fixed::toFloat(void) const {
    return static_cast<float>(this->fixedPointValue) 
            / static_cast<float>(1 << Fixed::fractionalBits); // 1075 / (1 * 256) = 4.19921875
}

int Fixed::toInt(void) const {
    return this->fixedPointValue >> Fixed::fractionalBits; // 1024 >> 8 = 4
}