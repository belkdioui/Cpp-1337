/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:41:29 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/09 12:01:50 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calculate_area_treangle(Point const a, Point const b, Point const c)
{
    float area;
    
    area = (a.get_value_x().toFloat() - c.get_value_x().toFloat()) * (b.get_value_y().toFloat() - (c.get_value_y().toFloat())) - (b.get_value_x().toFloat() - c.get_value_x().toFloat()) * (a.get_value_y().toFloat() - c.get_value_y().toFloat());   
    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float tr1,tr2,tr3;
    bool neg,pos;
    tr1 = calculate_area_treangle(point, a, b);
    tr2 = calculate_area_treangle(point, b, c);
    tr3 = calculate_area_treangle(point, c, a);
    neg = tr1 < 0 || tr2 < 0 || tr3 < 0;
    pos = tr1 > 0 || tr2 > 0 || tr3 > 0;

    return!(neg && pos);
}