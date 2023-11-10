/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:45:46 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/09 14:54:15 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>


template<typename T>
void easyfind(std::vector<T>& cont, int integer)
{
    typename std::vector<T>::iterator iter;
    iter = std::find(cont.begin(), cont.end(), integer);
    if(iter != cont.end())
        std::cout<<"yes the number if found."<<std::endl;
    else
        throw std::runtime_error("Value not found");  
}

#endif