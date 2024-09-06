/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:26:29 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/06 14:16:58 by bszabo           ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif