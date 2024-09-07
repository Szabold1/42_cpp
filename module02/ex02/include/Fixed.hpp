/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:26:29 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/06 16:29:50 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

// Fixed class for fixed point numbers
class Fixed {
private:
    int fixedPointValue;
    static const int fractionalBits = 8;

public:
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);

    Fixed(const Fixed& src); // copy constructor
    Fixed& operator=(const Fixed& rhs); // copy assignment operator

    ~Fixed(void);

    int getRawBits(void) const; // returns the raw value of the fixed point value
    void setRawBits(int const raw); // sets the raw value of the fixed point value

    float toFloat( void ) const;
    int toInt( void ) const;

    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;

    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;

    Fixed& operator++(void); // prefix increment
    Fixed operator++(int); // postfix increment
    Fixed& operator--(void); // prefix decrement
    Fixed operator--(int); // postfix decrement;

    static Fixed& min(Fixed& a, Fixed& b); // returns the smallest of a and b
    static const Fixed& min(const Fixed& a, const Fixed& b); // returns the smallest of a and b
    static Fixed& max(Fixed& a, Fixed& b); // returns the biggest of a and b
    static const Fixed& max(const Fixed& a, const Fixed& b); // returns the biggest of a and b
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif