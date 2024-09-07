/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:26:42 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/07 19:03:08 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main (void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    
    std::cout << "----------" << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "----------" << std::endl;
    std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "a + 3: " << a + 3 << std::endl;
    std::cout << "b - 4: " << b - 4 << std::endl;
    std::cout << "a * 200: " << a * 200 << std::endl;
    std::cout << "b / 2: " << b / 2 << std::endl;

    std::cout << "----------" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "1.2 <= 1.2: " << (1.2f <= 1.2f) << std::endl;
    std::cout << "11 >= 12: " << (11 >= 12) << std::endl;

    return (0);
}