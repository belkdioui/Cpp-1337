/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:09:14 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/05 12:02:54 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <ios>
#include <malloc/_malloc.h>
#include <sstream>
#include "stdlib.h"

int main()
{
    Data *ptr, *ptr1;
    uintptr_t raw;

    ptr = new Data;
    ptr->num1 = 5;
    ptr->num2 = 6;
    std::cout<<ptr<<std::endl;
    raw = Serializer::serialize(ptr);
    std::cout<<raw<<std::endl;
    ptr1 = Serializer::deserialize(raw);
    std::cout<<ptr1->num1<<std::endl;
    std::cout<<ptr1<<std::endl;
    delete ptr;
}