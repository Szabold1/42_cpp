/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:13:06 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/08 11:56:05 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const x;
    Fixed const y;

public:
    Point(void); // default constructor
    Point(const float x, const float y); // constructor with float parameters

    Point(const Point& src); // copy constructor
    Point& operator=(const Point& rhs); // copy assignment operator overload
    
    ~Point(void);
    
    // getters
    float getX(void) const;
    float getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif