/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:50:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/09 17:46:06 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){}
Point::Point(const float x1, const float y1) : x(x1), y(y1){}
Point::Point(const Point& obj):x(obj.x), y(obj.y){}

const Fixed Point::get_value_x() const
{
    return (this->x);
}
const Fixed Point::get_value_y() const
{
    return (this->y);
}

Point::~Point(){}

Point& Point::operator=(const Point& obj)
{
   (void)obj;
   return *this;
}