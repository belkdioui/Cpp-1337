/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:33:31 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/14 14:08:33 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <stack>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        try {
            RPN rpn(av[1]);
        } catch (std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }
    }
}