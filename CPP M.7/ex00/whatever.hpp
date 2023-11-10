/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:22:04 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/07 15:02:48 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b =temp;
}

template<typename T>
T min(T &a, T &b)
{
    if (a > b)
        return b;
    else if (a < b)
        return a;
    else
        return b;
}

template<typename T>
T max(T &a, T &b)
{
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return b;
}

#endif