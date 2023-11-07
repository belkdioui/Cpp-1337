/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:54:10 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/07 11:04:04 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void iter(T* arr, int len, void change_value(T&))
{
    for (int i=0; len > i; i++) {
        change_value(arr[i]);
    }
}

template<typename T>
void change_value(T& a)
{
    a++;
    std::cout<<a<<std::endl;
} 

#endif