/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:50:06 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/11 16:59:18 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
const Point a(0.f, 0.f);
const Point b(0.f, 4.f);
const Point c(4.f , 0.f);
const Point point(5.f , 5.f);

 if (bsp(a, b, c, point)) {
        std::cout << "The point is approximately inside the triangle." << std::endl;
    } else {
        std::cout << "The point is outside the triangle." << std::endl;
    }

return 0;
}