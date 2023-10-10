/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:50:06 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/09 17:42:54 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
const Point a(0.f, 0.f);
const Point b(4.f, 0.f);
const Point c(2.f , 3.f);
const Point point(2.f , 1.f);

std::cout<<bsp(a, b, c, point)<<std::endl;

return 0;
}