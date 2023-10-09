/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:51:01 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/09 17:43:51 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
    const Fixed x;
    const Fixed y;
    
    public:
        Point();
        Point(const float x1, const float y1);
        Point(const Point& obj);
        // Point& operator=(const Point& obj);
        const Fixed get_value_x() const;
        const Fixed get_value_y() const;
        ~Point();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);




#endif
