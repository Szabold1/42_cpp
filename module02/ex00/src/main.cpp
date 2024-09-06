/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:26:42 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/06 13:36:24 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void) {
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;

    std::cout << "----------" << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    std::cout << "----------" << std::endl;
    a.setRawBits(42);
    std::cout << a.getRawBits() << std::endl;
    std::cout << "----------" << std::endl;
    
    return (0);
}