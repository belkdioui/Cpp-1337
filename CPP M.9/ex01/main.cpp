/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:33:31 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/25 12:22:21 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <stack>
#include <stdexcept>

int main(int ac, char **av)
{

        try {
            if(ac != 2)
                throw std::runtime_error("Error");
            RPN rpn(av[1]);
        } catch (std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }
}