/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:13:47 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/24 17:55:30 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    try 
    {
        if (ac == 1)
            throw std::runtime_error("Error");
        PmergeMe range(av[1]);
    } catch (const std::exception &e) 
    {
        std::cerr<<e.what()<<std::endl;        
    }
}