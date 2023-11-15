/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:45:46 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/13 10:00:38 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <cstdio>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

template<typename T>
void easyfind(std::vector<T>& cont, int integer)
{
    if(cont.size() > 1)
    {
        typename std::vector<T>::iterator iter1;
        iter1 = std::find(cont.begin(), cont.end(), integer);
        typename std::vector<T>::iterator iter2;
        iter2 = std::find(iter1+1, cont.end(), integer);
        if(iter1 != cont.end() && iter2 != cont.end())
            std::cout<<"yes the number is found"<<std::endl;
        else
            throw std::runtime_error("Value not found");
    }
    else 
        throw std::runtime_error("the container is empty or has just one value");
}

#endif