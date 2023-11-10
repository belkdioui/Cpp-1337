/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:49:52 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/09 18:24:44 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>

int main()
{
    Span sp=Span(5);
    try {
    sp.addNumber(6);
    sp.addNumber(15);
    sp.addNumber(8);
    sp.addNumber(1);
    sp.addNumber(7);
    sp.print_cont();
    std::cout<<sp.shortestSpan()<<std::endl;
    std::cout<<sp.longestSpan()<<std::endl;
    sp.print_cont();
    } catch (std::exception& e) {
        std::cout<<e.what()<<std::endl;
    }

}