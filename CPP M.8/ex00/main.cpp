/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:59:36 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/13 10:01:04 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>

int main()
{
    std::vector<int> cont;
    cont.push_back(1);
    cont.push_back(5);
    cont.push_back(3);
    cont.push_back(4);
    cont.push_back(2);
    cont.push_back(2);
    try {
        easyfind<int>(cont, 2);
    } catch (std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }
}