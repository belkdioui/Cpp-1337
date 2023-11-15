/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:04:23 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/14 11:37:34 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    try {
        std::ifstream in(av[1]);
        if(ac != 2 || !in.is_open())
            throw std::runtime_error("Error: could not open file.");
        BitcoinExchange exchange(in);
    
    } catch (std::exception& e) {
        std::cout<<e.what()<<std::endl;
    }
}