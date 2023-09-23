/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 07:59:23 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/23 13:22:21 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser.hpp"

int main(int ac, char **av)
{
    if(ac != 4)
    {
       std::cerr<< "you don't entered 3 parameteres "<<std::endl;
       return (0);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream in(filename);
    if (!in.is_open())
    {
        std::cerr<< "error in input "<<std::endl; 
        return (1);
    }

    std::ofstream on(filename + ".replace");
    if (!on.is_open())
    {
        std::cerr<< "error in open "<<std::endl; 
        return (1);
    }
    std::string line;
    while(std::getline(in,line))
    {
        on<<line<<std::endl;
    }
}