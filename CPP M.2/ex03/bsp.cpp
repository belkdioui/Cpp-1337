/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:41:29 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/11 16:54:33 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calculate_area_triangle(Point const a, Point const b, Point const c) {
    Fixed f(0.5f);
    Fixed v((a.get_value_x().toFloat() * (b.get_value_y().toFloat() - c.get_value_y().toFloat())) + (b.get_value_x().toFloat() * (c.get_value_y().toFloat() - a.get_value_y().toFloat())) +
                       (c.get_value_x().toFloat() * (a.get_value_y().toFloat() - b.get_value_y().toFloat())));
    return abs(f.toFloat() * v.toFloat());
}


bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float tr1, tr2, tr3;
    tr1 = calculate_area_triangle(point, a, b);
    tr2 = calculate_area_triangle(point, b, c);
    tr3 = calculate_area_triangle(point, c, a);
    float total_area = calculate_area_triangle(a, b, c);
    if (tr1 + tr2 + tr3 == total_area)
        return (1);
    return (0);
}
