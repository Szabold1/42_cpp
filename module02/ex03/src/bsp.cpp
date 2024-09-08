/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:07:52 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/08 12:12:26 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// get the area of the triangle (a, b, c)
static float getArea(Point const a, Point const b, Point const c) {
    float area = (a.getX() * (b.getY() - c.getY()) +
                    b.getX() * (c.getY() - a.getY()) +
                    c.getX() * (a.getY() - b.getY()));

    if (area < 0)
        return (-area);
    return (area);
}

// check if point is inside the triangle (a, b, c)
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float area = getArea(a, b, c);
    float area1 = getArea(point, b, c);
    float area2 = getArea(a, point, c);
    float area3 = getArea(a, b, point);

    if (area == area1 + area2 + area3) {
        if (area1 == 0 || area2 == 0 || area3 == 0)
            return (false);
        return (true);
    }
    return (false);
}