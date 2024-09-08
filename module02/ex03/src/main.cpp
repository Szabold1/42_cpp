/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:26:42 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/08 12:15:10 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main (void) {
    Point a; // 0, 0
    Point b(5.0f, 5.0f);
    Point c(-5.0f, 5.0f);

    Point p1(1.0f, 2.0f);
    Point p2(2.0f, 2.0f);
    Point p3(3.0f, 2.0f);

    std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
    std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
    std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;

    std::cout << "----------" << std::endl;
    std::cout << "p1: " << p1.getX() << ", " << p1.getY() << std::endl;
    bool res1 = bsp(a, b, c, p1);
    std::cout << "p1 is inside the triangle: " << res1 << std::endl;

    std::cout << "----------" << std::endl;
    std::cout << "p2: " << p2.getX() << ", " << p2.getY() << std::endl;
    bool res2 = bsp(a, b, c, p2);
    std::cout << "p2 is inside the triangle: " << res2 << std::endl;

    std::cout << "----------" << std::endl;
    std::cout << "p3: " << p3.getX() << ", " << p3.getY() << std::endl;
    bool res3 = bsp(a, b, c, p3);
    std::cout << "p3 is inside the triangle: " << res3 << std::endl;

    return (0);
}