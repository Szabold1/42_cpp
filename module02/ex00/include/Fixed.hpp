/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:26:29 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/05 21:40:37 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream> // cout, endl

// Fixed class for fixed point numbers
class Fixed {
private:
    int fixedPointValue;
    static const int fractionalBits = 8;

public:
    Fixed(void); // default constructor
    Fixed(const Fixed& src); // copy constructor
    Fixed& operator=(const Fixed& rhs); // copy assignment operator
    ~Fixed(void); // destructor

    int getRawBits(void) const; // returns the raw value of the fixed point value
    void setRawBits(int const raw); // sets the raw value of the fixed point value

};

#endif