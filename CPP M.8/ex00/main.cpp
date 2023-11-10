/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:59:36 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/09 15:02:26 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>

int main()
{
    std::vector<int> cont;
    for(int i = 1; i< 10; i++)
        cont.push_back(i);
    try {
        easyfind<int>(cont, 5);
    } catch (std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }
}