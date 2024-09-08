/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:12:56 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/08 12:06:26 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* -------------- Constructors, copy assignment operator overload, destructor */
/* -------------------------------------------------------------------------- */

// default constructor
Point::Point(void) : x(Fixed(0)), y(Fixed(0)) {}

// constructor with float parameters
Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

// copy constructor
Point::Point(const Point& src) : x(src.x), y(src.y) {}

// copy assignment operator overload
Point& Point::operator=(const Point&) {
    return (*this);
}

// destructor
Point::~Point(void) {}

/* --------------------------------------------------------- Getters, setters */
/* -------------------------------------------------------------------------- */

// getters
float Point::getX(void) const {
    return (this->x.toFloat());
}

float Point::getY(void) const {
    return (this->y.toFloat());
}